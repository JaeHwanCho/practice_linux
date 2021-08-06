#include <stdio.h>
#include "func.h"

int main() {
	int in_data = 0;
	setvbuf(stdout, NULL, _IOFBF, 100);

	while (in_data != ENDING_NUMBER) {
		fscanf(stdin, "%d", &in_data);
		func(in_data);
	}	
}
