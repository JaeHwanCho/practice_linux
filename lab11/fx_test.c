#include "fx_s2308.h"
#include <stdio.h>
#define FX_TEST_ITER_NUMBER 10000000

void* test_div1(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div1(i, i+2); 
	printf("Div1 Test %d\n", sum);
	return arg;
}

void* test_div2(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div2(i, i+(2<<FX_QNUM)); 
	printf("Div2 Test %d\n", sum);
	return arg;
}

void* test_div3(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div3(i, i+2);
	printf("Div3 Test %d\n", sum);
	return arg;
}

void* test_div4(void* arg)
{
	int sum = 0;
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div4(i, i+2);
	printf("Div4 Test %d\n", sum);
	return arg;
}

void* test_div5(void* arg)
{
	int sum = 0;
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_div4(i, i+2);
	printf("Div5 Test %d\n", sum);
	return arg;
}

void* test_mul2(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul2(i, i+2); 
	printf("Mul2 Test %d\n", sum);
	return arg;
}
void* test_mul3(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul3(i, i+2); 
	printf("Mul3 Test %d\n", sum);
	return arg;
}
void* test_mul4(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul4(i, i+2); 
	printf("Mul4 Test %d\n", sum);
	return arg;
}
void* test_mul5(void* arg)
{
	int sum = 0; 
	for (int i=0; i < FX_TEST_ITER_NUMBER; i++)
		sum += fx_mul5(i, i+2); 
	printf("Mul5 Test %d\n", sum);
	return arg;
}
