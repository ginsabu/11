#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i = 300;
	char c = 'a';
	
	int *pi = &i;
	char *pc = &c;
	
	printf("%i, %i, %c\n", i, *pi, *pc);

}