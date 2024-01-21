# CppTrainingプロジェクト

このリポジトリには、C++トレーニングの一環としてのC++プロジェクトが含まれています。以下は各プロジェクトの簡単な概要です。

## プロジェクト

### 継承 (Inheritance)
- **説明**: C++における継承の使用を示すプロジェクトです。派生クラス（FragTrap、ScavTrap）が基底クラス（ClapTrap）からどのように継承されるかの基本的な例が含まれています。
- **内容**:
  - `ClapTrap.cpp/hpp`: 基底クラスの実装。
  - `FragTrap.cpp/hpp`, `ScavTrap.cpp/hpp`: 派生クラス。
  - `main.cpp`: メインのドライバーコード。
  - `Makefile`: プロジェクトのコンパイル用。

### 電話帳 (Phonebook)
- **説明**: 連絡先を管理するためのシンプルな電話帳アプリケーション。
- **内容**:
  - `Contact.hpp`, `Phonebook.hpp`: 電話帳のヘッダーファイル。
  - `Phonebook.cpp`, `getContact.cpp`, `setContact.cpp`: 実装ファイル。
  - `main.cpp`: メインのドライバーコード。
  - `Makefile`: プロジェクトのコンパイル用。

### 仮想関数 (Virtual_function)
- **説明**: C++における仮想関数とポリモーフィズムの使用を示します。
- **内容**:
  - `Animal.hpp/cpp`, `Cat.hpp/cpp`, `Dog.hpp/cpp`: ポリモーフィズムを示すクラス。
  - `Brain.hpp/cpp`: メモリデモンストレーション用の関連クラス。
  - `WrongAnimal.hpp/cpp`, `WrongCat.hpp/cpp`: 不適切なポリモーフィズムの使用例。
  - `main.cpp`: メインのドライバーコード。
  - `Makefile`: プロジェクトのコンパイル用。

## ビルドと実行
各プロジェクトには`Makefile`が含まれており、簡単にコンパイルできます。プロジェクトディレクトリに移動し、`make`コマンドを使用してプロジェクトをビルドしてください。


