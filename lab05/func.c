#include <stdio.h>

int func(int in_data) {
	fprintf(stdout, "stdout : %d Jaehwan Cho\n", in_data);
	fprintf(stderr, "stderr : %d Jaehwan Cho\n", in_data);
	fflush(stdout);
}

