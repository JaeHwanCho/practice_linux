#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>
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
        c = fx_div4(a,b);
        fc = toFloat(c);
        printf("Division Test div4 : %d %f\n", c, fc);
        c = fx_div5(a,b);
        fc = toFloat(c);
        printf("Division Test div5 : %d %f\n", c, fc);
	printf("Floating Point 정답%f\n", fa/fb); 
	printf("Floating Point 정답%e\n", fa/fb); 
	
	pthread_t thread[9];
	pthread_create(&thread[0], NULL, test_mul2, NULL);
	pthread_create(&thread[1], NULL, test_mul3, NULL);
	pthread_create(&thread[2], NULL, test_mul4, NULL);
	pthread_create(&thread[3], NULL, test_mul5, NULL);
	pthread_create(&thread[4], NULL, test_div1, NULL);
	pthread_create(&thread[5], NULL, test_div2, NULL);
	pthread_create(&thread[6], NULL, test_div3, NULL);
	pthread_create(&thread[7], NULL, test_div4, NULL);
	pthread_create(&thread[8], NULL, test_div5, NULL);
	pthread_join(thread[8], NULL);
	pthread_join(thread[7], NULL);
	pthread_join(thread[6], NULL);
	pthread_join(thread[5], NULL);
	pthread_join(thread[4], NULL);
	pthread_join(thread[3], NULL);
	pthread_join(thread[2], NULL);
	pthread_join(thread[1], NULL);
	pthread_join(thread[0], NULL);
	printf("All Joined\n");
}

