#include <stdio.h>
#include <string.h>
#include <math.h>
long bin_to_dec(char num[])
{
	long result=0, idx=0;
	int i;
	for(i=(strlen(num)-1); i>=0; i--)
	{
		if(num[idx++]=='1')
		{
			result+=pow(2, i);
		}
	}
	return result;
}

long dec_to_octal(long n)
{
	if(n<=7)
		return n;
		
	return dec_to_octal(n / 8) * 10 + n % 8;
}

int main()
{
	char num[20];
	printf("이진수 입력하세요: ");
	scanf("%s", num);
	
	printf("10진수로 전환하면: %ld\n", bin_to_dec(num));
	printf("8진수로 전환하면: %ld\n", dec_to_octal(bin_to_dec(num)));
	return 0;
}
