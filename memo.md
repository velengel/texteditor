# git patchファイルの使い方
```bash
# 最新のコミットをパッチとして出力
git format-patch -1 HEAD
# 適用
git am 0001-<コミットメッセージ>.patch
```
