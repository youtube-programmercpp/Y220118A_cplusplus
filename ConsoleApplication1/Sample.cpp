#include "Sample.h"
#include <stdio.h> //C言語用のヘッダ





void Sample2::print() const
{
	printf("a = %d, b = %d\n", a, b);
}

void Sample2::clear()
{
	a = b = 0;
}

Sample::Sample(int a, int b) noexcept
	: a(a)//初期化
	, b(b)//初期化
{
}

void Sample::print() const
{
	printf("a = %d, b = %d\n", a, b);
	
}

void Sample::clear() noexcept
{
	a = b = 0;
}
