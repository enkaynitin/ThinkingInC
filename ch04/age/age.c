/* age.c: Commentson your age */
#include <stdio.h>

int main() {
	int age;
	puts("Enter your age: ");
	scanf("%d", &age);
	if (age < 20)
		puts("Youth");
	else if (age < 40)
		puts("Prime");
	else if (age < 60)
		puts("aches and pains");
	else if (age < 80)
		puts("Golden");
	else {
		char really;
		printf ("Are you really %d?\n", age);
		scanf(" %c", &really); /* note space */
		if (really == 'Y' || really == 'y')
			puts("Congratulations!");
		else 
			puts("I didn't think so!");
	}
	return 0;
}

	
