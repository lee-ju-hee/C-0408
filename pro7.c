#include <stdio.h>
int factorial(int n)
{
	if(n>1)
	{
		return n*factorial(n - 1);
	}
	else
	{
		return 1;
	}
}

int combination(int n, int r)
{
	return factorial(n) / (factorial(n - r)*factorial(r));
}

void pascal(int n)
{
	int i, j;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("%d ", combination(i, j));
		}
		printf("\n");
	}
}
int main()
{
	int size;
	
	printf("�ﰢ�� ũ�⸦ �Է��ϼ���: ");
	scanf("%d", &size);
	
	pascal(size);
	return 0;
}
