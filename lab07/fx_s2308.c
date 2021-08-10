#include <math.h>
#include <stdio.h>

#define FX_SYSTEM 
#define FX_S23_08 2308   	// 각자 
#define FX_QNUM 8	    	// 쩜 다음에 몇비트 있음 

typedef float fx_s23_08;
typedef fx_s23_08 fixed;

// Conversion From float to fx 
fixed fromFloat(float f)
{
	return (int) (f * 256.0);
}

float toFloat(fixed a)
{
	return (float) a / 256.0; 
} 

// fx_s23_08 multiplication
fixed fx_mul2(fixed a, fixed b)
{
	float fa,fb,fc; 
	fa = toFloat(a);
	fb = toFloat(b);
	fc = fa*fb; 
	return fromFloat(fc); 
}

fixed fx_mul(fixed a, fixed b)
{
	return a * b / (1<<FX_QNUM); 
}

int main()
{
	fixed a, b, c;
	int ia, ib, ic;
	scanf("%f %f", &a, &b);	
	ia = fromFloat(a); 
	ib = fromFloat(b); 
	ic = fx_mul(ia,ib); 
	c = toFloat(ic);
	printf("%f %d %f\n", a, ia, toFloat(ia)); 
	printf("%f %d %f\n", b, ib, toFloat(ib)); 
	printf("%d %f\n", ic, c); 
}


