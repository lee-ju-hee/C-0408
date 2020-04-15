#include <stdio.h>
long dec_to_bin(long n)
{
	if(n<=1)
		return n;
	return dec_to_bin(n/2)*10+n%2;
}

long dec_to_octal(long n)
{
	if(n<=7)
		return n;
	return dec_to_octal(n/8)*10+n%8;
}

char hexa(int n)
{
	switch(n)
	{
		case 10:
			return "A";
			break;
		case 11:
			return "B";
			break;
		case 12:
			return "C";
			break;
		case 13:
			return "D";
			break;
		case 14:
			return "E";
			break;
		case 15:
			return "F";
			break;
		default:
			return n+48;
	}
}

void dec_to_hexa(long n)
{
	char result[20];
	char *endptr;
	int idx=0;
	int i;
	int quotinent, remainder;
	long number;
	
	do
	{
		quotinent = n/16;
		remainder = n%16;
		result[idx]=hexa(remainder);
		idx++;
		n=quotinent;
	}
	while(quotinent>=16);
	
	if(quotinent==0)
		idx--;
	else
		result[idx]=hexa(quotinent);
		
	for(i=idx; i>=0; i--)
		printf("%c", result[i]);
	printf("\n");
}

int main()
{
	long number;
	printf("10�� ���� �Է��ϼ���: ");
	scanf("%ld", &number);
	
	printf("%ld�� 2������ �ٲٸ� %ld\n", number, dec_to_bin(number));
	printf("%ld�� 8������ �ٲٸ� %ld\n", number, dec_to_bin(number));
	printf("%ld�� 16������ �ٲٸ� ", number);
	dec_to_hexa(number);
	
	return 0;
}
