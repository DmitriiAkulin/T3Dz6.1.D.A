#include "math_func.h"
//sum
int sum(int a, int b)
{
		return  a + b;
}
//diff
int diff(int a, int b)
{
		return  a - b;
}
//mult
int multiplication(int a, int b) 
{
	
	return a * b;
}
//div
double division(int a, int b)
{
		return (double) a / b;
}
//степень
int num_pow(int num, int pow)
{
	int result = 1;
	for (int i = pow; i > 0; --i) result *= num;
	return result;
}