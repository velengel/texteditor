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
```
