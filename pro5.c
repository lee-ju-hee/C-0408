#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double principle, rate;
	double *income;
	int year, i;
	
	printf("원금: ");
	scanf("%lf", &principle);
	
	printf("이자율: ");
	scanf("%lf", &rate);
	
	printf("기간: ");
	scanf("%d", &year);
	
	income=(double *)malloc(sizeof(double)*year);
	
	for(i=0; i<year; i++)
	{
		income[i] = principle*(double)(pow(1 + 0.01*rate, i + 1));
		printf("%d년 예치시:%.2f원(연%.1f%%)\n", i + 1, income[i], rate);
	}
	free(income);
	
	return 0;
}
