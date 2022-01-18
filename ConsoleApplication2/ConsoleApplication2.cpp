#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdexcept> //std::runtime_error
//例外 exception
int input(const char* prompt)
{
	printf("%s: ", prompt);
	int n;
	if (scanf("%d", &n) == 1) {
		//正常入力
		return n;
	}
	else {
		//入力エラー
		throw std::runtime_error("入力エラーが発生しました。");
	}
}
int main()
{
	try {
		printf("%d が入力されました。\n", input("整数値を入力してください"));
	}
	catch (const std::exception& e) {//捕捉
		fputs(e.what(), stderr);
	}
}
