# git patchファイルの使い方
```bash
# 最新のコミットをパッチとして出力
git format-patch -1 HEAD
# 適用
git am 0001-<コミットメッセージ>.patch
```

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
find . -name "*.c" -o -name "*.h" | xargs clang-format --dry-run --Werror
```

## 2つ以上前のコミットにfixupつけてコミットする
```bash
# commit hash 確認
git log --oneline
# fixup(例)
git commit -m --fixup=70a2852
```
