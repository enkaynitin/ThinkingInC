/* avg.c: Averages 2 integers */
#include <stdio.h>

int main() {
	/* Declaration must be at beginning: */
	int num1, num2;
	float sum;

	puts("Enter the first number:");
	scanf("%d", &num1);
	puts("Enter the second number:");
	scanf("%d", &num2);

	sum = num1 +num2;
	printf("The average is %10.2f\n", sum/2);
	return 0;
}

