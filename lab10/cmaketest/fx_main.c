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
	c = fx_div1(a,b); 
	fc = toFloat(c); 
	printf("Division Test div1 : %d %f\n", c, fc); 
	c = fx_div2(a,b); 
	fc = toFloat(c); 
	printf("Division Test div2 : %d %f\n", c, fc); 
        c = fx_div3(a,b);
        fc = toFloat(c);
        printf("Division Test div3 : %d %f\n", c, fc);
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 

	a = test_mul2(); 
	printf("mul2 Sum: %d\n", a); 
	a = test_mul3(); 
	printf("mul3 Sum: %d\n", a); 
	a = test_mul4(); 
	printf("mul4 Sum: %d\n", a); 
	a = test_mul5(); 
	printf("mul5 Sum: %d\n", a); 

        a = test_div1();
        printf("div1 Sum: %d\n", a);
        a = test_div2();
        printf("div2 Sum: %d\n", a);
        a = test_div3();
        printf("div3 Sum: %d\n", a);
}

