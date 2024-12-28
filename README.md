This repository is intended for study and learning purposes.

https://viewsourcecode.org/snaptoken/kilo/index.html

## pythonの仮想環境コマンドメモ

```bash
# 仮想環境作成
python3 -m venv myenv
# windowsの場合のみ
.\myenv\Scripts\activate
# 動作確認
 cpplint .\kilo.c
```

## pre-commitメモ
```bash
#!/bin/bash
find . -name "*.c" -o -name "*.h" | xargs cpplint
```
