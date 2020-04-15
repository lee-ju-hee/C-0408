#include <stdio.h>
int multiply(int a[], int s_a, int b[], int s_b, int result[])
{
	int i, j;
	int cnt1=0, cnt2=0;
	int temp;
	
	for(i=0; i<s_a; i++)
	{
		for(j=0; j<s_b; j++)
		{
			result[cnt1++]=a[i]*b[j];
		}
	}
	for(i=0; i<cnt1; i++)
	{
		temp=result[i];
		for(j=i+1; j<cnt1; j++)
		{
			if(temp==result[j] && result[j]!=0)
			{
				result[j]=0;
			}
		}
	}
	for(i=0; i<cnt1; i++)
	{
		if(result[i]!=0)
		{
			result[cnt2++]=result[i];
		}
	}
	return cnt2;
}

int main()
{
	int a[]={1,3,5,7};
	int b[]={3,5,8,9,10};
	int result[20];
	int count, i, size_a, size_b;
	size_a=sizeof(a)/sizeof(int);
	size_b=sizeof(b)/sizeof(int);
	count=multiply(a, size_a, b, size_b, result);
	for(i=0; i<count; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	return 0;
}
