#include <iostream>
#include "Sample.h"
int main()
{
	//型    変数名;
	int     k     { 0 };
	Sample  x     {10, 30 };
	Sample2 y     {50, 60 };

	//式の文
	//expression statement
	k;
	x.print();
	x.clear();
	x.print();
	//y.print();
	//y.clear();
	//y.print();
	printf("a = %d, b = %d\n", y.a, y.b);
	y.a = y.b = 0;
	printf("a = %d, b = %d\n", y.a, y.b);
}
