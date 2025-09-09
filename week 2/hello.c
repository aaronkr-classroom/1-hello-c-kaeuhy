#include <stdio.h>

int main(void)
{
	int age = 25;
	char grade = 'A';
	char name[] = "Eunhyeon";

	printf("Hello\n");
	printf("My name is %s\n", name);
	printf("I'm %d years old.\n", age);
	printf("I want a %c grade.\n", grade);

	return 0;
}