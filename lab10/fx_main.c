#include <stdio.h>
#include "fx_s2308.h"
#include "fx_test.h"

int main()
{
	fixed a, b, c;
	float fa,fb,fc; 
	scanf("%f %f",&fa, &fb); 
	a = fromFloat(fa); 
	b = fromFloat(fb); 
	printf("%f %d %f\n", fa, a, toFloat(a)); 
	printf("%f %d %f\n", fb, b, toFloat(b)); 
	c = fx_mul5(a,b); 
	fc = toFloat(c); 
	printf("mul5 : %d %f\n", c, fc); 
	c = fx_mul4(a,b); 
	fc = toFloat(c); 
	printf("mul4 : %d %f\n", c, fc); 
	c = fx_mul3(a,b); 
	fc = toFloat(c); 
	printf("mul3 : %d %f\n", c, fc); 
	c = fx_mul2(a,b); 
	fc = toFloat(c); 
	printf("mul2 : %d %f\n", c, fc); 
	printf("%f\n", fa*fb); 
	printf("%e\n", fa*fb); 

	a = test_mul2(); 
	printf("mul2 : %d\n", a); 
	a = test_mul3(); 
	printf("mul3 : %d\n", a); 
	a = test_mul4(); 
	printf("mul4 : %d\n", a); 
	a = test_mul5(); 
	printf("mul5 : %d\n", a); 
}
