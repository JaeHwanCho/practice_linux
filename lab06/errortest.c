#define OK_ANSWER 100
#define OK_ANSWER2 100
#define ERROR_LINE __LINE__
#include <stdio.h>

int main()
{
	int a = 200; 
	int b = 10; 
	printf("STDOUT:%c:NL Testing /* Here */\n", '/*What ?*/'); 
	printf("STDOUT:a+++++b=%d\n", (a++ + ++b)); 
	printf("STDOUT:a=%d xxb=%d\n", a, b); 

#define twice(x) (2*(x))
#define call_with_1(x) x(1)
	printf("%d\n",call_with_1 (twice)); 

#line 5000

#define strange(file) fprintf (file, "%s %d", 
strange(stderr) __FILE__, 35); 
#warning "WARN:WANRN"

	return/* check code */OK_ANSWER; 
}
