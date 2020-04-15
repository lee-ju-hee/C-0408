#include <stdio.h>
void printCoin(int coin[4], int money)
{
	int result[4] = { 0, 0, 0, 0 };
	int i;
	for (i = 0; i < 4; i++)
	{
		while (1)
		{
			if (money - coin[i] >= 0) 
			{
				money -= coin[i];
				result[i]++;
			}
			else
				break;
		}
	}
	printf("500원:%d개\n100원:%d개\n50원:%d개\n10원:%d개\n", result[0] + 1, result[1] + 1, result[2] + 1, result[3] + 1);

}
int main()
{
	int coin[4] = { 500, 100, 50, 10 };
	int money;
	
	printf("금액 입력: ");
	scanf("%d", &money);

    printCoin(coin, money - (500 + 100 + 50 + 10));
	
	return 0;
}
