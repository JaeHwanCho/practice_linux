#include <stdio.h>
int fn1(int a)
{
	return 1*a;
}
int fn2(int a)
{
	return 2*a;
}
int fn3(int a)
{
	return 3*a;
}

int fn4(int *a)
{
	*a = 4;
	return 4;
}

int main()
{
	int a=0; 
	int b;
	int (*ffff)();	// () must be
	int (*f[3])(int a) = {fn1, fn2, fn3};
	ffff = f[2];
	ffff = fn3;
	printf("%d %d %d\n", f[0](10), f[1](10), ffff(100));
	printf("%d %d %d\n", f[0](10), f[1](10), f[2](10));
	printf("%d %d %d %d %d %d %d\n", a++, ++a, a++, ++a, a++, ++a, a++);
	b = fn4(&a);
	printf("%d\n", b);
	
}
