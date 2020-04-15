#include <stdio.h>
#include <string.h>
#include <Windows.h>
int main()
{
	char str[3][57];
    FILE *fp = fopen("C:\\plaintext.txt", "r");
	printf("Caesar 암호문\n");
	printf("Plain Text\n");
    for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 57; j++)
		{
			{
				fscanf(fp, "%c", &str[i][j]);
				printf("%c", str[i][j]);
			}
		}
	}
    printf("\n\n");
    printf("Plain Text Caesar 암호화\n");
    for (int i = 0; i < 3; i++)
    {
		for (int j = 0; j < 57; j++)
		{
			str[i][j] -= 3;
			if (str[i][j] < 0)
			str[i][j] += 3;
			printf("%c", str[i][j]);
		}
	}

    printf("\n\n");
    fclose(fp);
    Sleep(3000);
    system("cls");
	fp = fopen("C:\\plaintext.txt", "r");
    printf("단순 전치 암호문\n");
    printf("Plain Text\n");
    for (int i = 0; i < 3; i++)
    {
		for (int j = 0; j < 57; j++)
		{
			fscanf(fp, "%c", &str[i][j]);
			printf("%c", str[i][j]);
		}
	}

    printf("\n\n");
    printf("Plain Text 단순 전치 암호문\n");
    for (int i = 0; i < 57; i++)
    {
    	for (int j = 0; j < 3; j++)
        {
            printf("%c", str[j][i]); //인덱스 i와 j 바꾸기

        }
    }
	printf("\n\n");
    fclose(fp);
    Sleep(3000);
    system("cls");
    fp = fopen("C:\\plaintext.txt", "r");
    printf("XOR 암호문\n");
    printf("Plain Text\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 57; j++)
       {
            fscanf(fp, "%c", &str[i][j]);
            printf("%c", str[i][j]);
        }
    }
    printf("\n\n");
    printf("Plain Text XOR 암호문\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 57; j++)
        {
            str[i][j] %= 3; //마스크
            printf("%c", str[i][j]);
        }
    }
    printf("\n");
    fclose(fp);
    return 0;
}
