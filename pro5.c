#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	double principle, rate;
	double *income;
	int year, i;
	
	printf("����: ");
	scanf("%lf", &principle);
	
	printf("������: ");
	scanf("%lf", &rate);
	
	printf("�Ⱓ: ");
	scanf("%d", &year);
	
	income=(double *)malloc(sizeof(double)*year);
	
	for(i=0; i<year; i++)
	{
		income[i] = principle*(double)(pow(1 + 0.01*rate, i + 1));
		printf("%d�� ��ġ��:%.2f��(��%.1f%%)\n", i + 1, income[i], rate);
	}
	free(income);
	
	return 0;
}