#include "fx_s2308.h"
#define FX_TEST_ITER_NUMBER 10000000

int test_div1()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div1(i, i+2); 
	return sum; 
}

int test_div2()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div2(i, i+(2<<FX_QNUM)); 
	return sum; 
}

int test_div3()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div3(i, i+2); 
	return sum; 
}

int test_mul2()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul2(i, i+2); 
	return sum; 
}
int test_mul3()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul3(i, i+2); 
	return sum; 
}
int test_mul4()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul4(i, i+2); 
	return sum; 
}
int test_mul5()
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul5(i, i+2); 
	return sum; 
}
