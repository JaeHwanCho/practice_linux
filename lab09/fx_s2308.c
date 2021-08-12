#include <math.h>
#include <stdio.h>

#define FX_S15_16  1516   	// 
#define FX_S16_15  1615   	// 
#define FX_S32_31  3231   	// 
#define FX_S47_16  4716   	// 
#define FX_S23_08  2308   	// 나

#define FX_SYSTEM  FX_S23_08	// 자기것
	// MAX = +8388607.99609375    MIN = -8388608.00

#if FX_SYSTEM==FX_S23_08		// 자기
#define FX_QNUM	    	8	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF1	4	    	// 쩜 다음에 몇비트 있음 
#define FX_QNUM_HALF2	4	    	// 쩜 다음에 몇비트 있음 
#define FX_QFLOAT_VAL	256.0F
#define FX_QDOUBLE_VAL	256.0
#define FX_QINT_VAL	(1<<FX_QNUM)

typedef int fx_s23_08;
typedef fx_s23_08 fixed;

#define fromFloat(a)    ((fixed) ((a)*(FX_QFLOAT_VAL)))
#define toFloat(a)	((float) ((a)/FX_QFLOAT_VAL))
#define toDouble(a)	(((a)/FX_QFLOAT_VAL))
#define fx_mul2(a,b)	(fromFloat(((toFloat(a))*(toFloat(b)))))
#define fx_mul3(a,b)	(((a)*(b))>>FX_QNUM)
#define fx_mul4(a,b)	((((long long)(a))*((long long)(b)))>>FX_QNUM)
#define fx_mul5(a,b)	(((a)>>FX_QNUM_HALF1)*((b)>>FX_QNUM_HALF2))

int test_mul2()
{
	int sum = 0; 
	for (int i=0; i < 10000000; i++)
		sum += fx_mul2(i, i+2); 
	return sum; 
}
int test_mul3()
{
	int sum = 0; 
	for (int i=0; i < 10000000; i++)
		sum += fx_mul3(i, i+2);
	return sum; 
}
int test_mul4()
{
	int sum = 0; 
	for (int i=0; i < 10000000; i++)
		sum += fx_mul4(i, i+2); 
	return sum; 
}
int test_mul5()
{
	int sum = 0; 
	for (int i=0; i < 10000000; i++)
		sum += fx_mul5(i, i+2); 
	return sum; 
}

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

#endif
