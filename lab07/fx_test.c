#include <stdio.h>
#include <math.h>

#define FX_SYSTEM 
#define FX_S23_08 2308
#define FX_QNUM 8 

typedef float fx_s23_08;
typedef fx_s23_08 fixed;

// Conversion From float to fx 
fixed fromInt(int f)
{
	return (fixed) (f * 1<<FX_QNUM);
}

int toInt(fixed a)
{
	return (int) (a / (1<<FX_QNUM)); 
}

// fx_s23_08 multiplication
fixed fx_mul2(fixed a, fixed b)
{
	int ia,ib,ic;
	ia = toInt(a);
	ib = toInt(b);
	ic = ia*ib;
	return fromInt(ic); 
}

fixed fx_mul(fixed a, fixed b)
{
	return (a * b / (1<<FX_QNUM)); 
}

int main()
{
	fixed a, b, c, d;
	int ia, ib, ic, id;
	scanf("%f %f", &a, &b);	
	ia = toInt(a); 
	ib = toInt(b); 
	c = fx_mul(ia,ib);
       	d = fx_mul(a,b);	
	ic = toInt(c);
	id = toInt(d);
	printf("%f %d %f %d\n", a, ia, fromInt(ia), toInt(a)); 
	printf("%f %d %f %d\n", b, ib, fromInt(ib), toInt(b)); 
	printf("%d %f\n", ic, c);
	printf("%d %f\n", id, d);
}


