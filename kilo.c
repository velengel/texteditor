/*** MARK: includes ***/
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

/*** MARK: data ***/
struct termios orig_termios;

/*** MARK: terminal ***/
void disableRawMode() {
  tcsetattr(STDIN_FILENO, TCSAFLUSH, &orig_termios);
}

void enableRawMode() {
  tcgetattr(STDIN_FILENO, &orig_termios);
  atexit(disableRawMode);

  struct termios raw = orig_termios;
  raw.c_lflag &= ~(ECHO | ICANON);

  tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);
}

/*** MARK: init ***/
int main() {
  enableRawMode();

  char c;
  while (read(STDIN_FILENO, &c, 1) == 1 && c != 'q') {}
  return 0;
}
