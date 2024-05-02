#include <stdio.h>
int main() {
	int x = 5;
//	int y = 0;       for fixing bug we have to change the y to some value other than zero
	
	int y=1;
	int result = x / y;
	printf("Result: %d\n", result);
	return 0;
}

