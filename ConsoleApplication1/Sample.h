#pragma once
class Sample {
	int a;
	int b;
public:
	//constructor コンストラクタ
	/*戻り値無し*/Sample(int a, int b) noexcept;
	void print() const;
	void clear() noexcept;
};
//C言語の構造体は
//データメンバだけ
//C++の構造体は
//関数も含めることが出来る
//型も含めることが出来る
struct Sample2 {
	//メンバ変数（データメンバ）
	int a;
	int b;
	//const メンバ関数
	void print() const;//できるだけ const メンバを増やす
	//非 const メンバ関数
	void clear();
};
