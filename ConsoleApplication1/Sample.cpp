#include "Sample.h"
#include <stdio.h> //CŒ¾Œê—p‚Ìƒwƒbƒ_





void Sample2::print() const
{
	printf("a = %d, b = %d\n", a, b);
}

void Sample2::clear()
{
	a = b = 0;
}

Sample::Sample(int a, int b) noexcept
	: a(a)//‰Šú‰»
	, b(b)//‰Šú‰»
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
