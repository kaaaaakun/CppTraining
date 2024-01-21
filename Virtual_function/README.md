# Animal Project

## 概要
このプロジェクトは、C++を使用して動物の階層構造を実装するものです。基本的なクラスとして`Animal`, `Cat`, `Dog`があり、それぞれが異なる振る舞いを持っています。また、`WrongAnimal`と`WrongCat`クラスは、継承の誤用例を示しています。

## 構築方法&実行方法

```bash
make
./Virtual_function
```

## 機能
- `Animal`, `Cat`, `Dog` クラスの実装。
- 動的ポリモーフィズムと純粋仮想関数の使用。
- 深いコピーの例として、`Brain` クラスの実装。
- 継承の誤用を示す `WrongAnimal` と `WrongCat` クラス。
- Makefile を使用したビルドプロセス。

## クラス構造
- `Animal`（基本クラス）
  - `Cat`
  - `Dog`
- `WrongAnimal`
  - `WrongCat`
