#include<stdio.h>

int main()
{
	double t,T;
	printf("Enter the number of hours that freezer take: ");
	scanf("%lf",&t);
	T=(4*t*t)/(t+2)-20;
	printf("The Freezing temperature is %lf",T);
	return 0;
}

