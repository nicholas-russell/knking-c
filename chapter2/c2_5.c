#include <stdio.h>

int main(void)
{
	float x;
	
	printf("Enter vlaue for x: ");
	scanf("%f", &x);
	printf("%f\n", 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x-7*x-6);
}