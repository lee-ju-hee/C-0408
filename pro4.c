#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void multiply_matrix(int **ma, int **mb, int row1, int col1, int row2, int col2)
{
	int **mab;
	int i, j, k;
	mab=(int **)malloc(sizeof(int*)*row1);
	for(i=0; i<row1; i++)
	{
		mab[i]=(int*)malloc(sizeof(int)*col2);
	}
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col2; j++)
		{
			mab[i][j]=0;
			for(k=0; i<col1; k++)
			{
				mab[i][j]+=ma[i][k]*mb[k][j];
			}
		}
	}
	
	printf("aXb 행렬 출력\n");
	print_matrix(mab, row1, col2);
	
	for(i=0; i<row1; i++)
	{
		free(mab[i]);
	}
	free(mab);
}

void print_matrix(int **m, int row_size, int col_size)
{
	int i, j;
	for(i=0; i<row_size; i++)
	{
		for(j=0; j<col_size; j++)
		{
			printf("%3d", m[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int **a, **b;
	int i, j;
	int row1, row2=1, col1=0, col2;
	srand((unsigned)time(NULL));
	while(col1 != row2)
	{
		printf("첫 번째 행렬의 행과 열을 입력: ");
		scanf("%d %d", &row1, &col1);
		printf("\n두 번째 행렬의 행은 첫 번째 행렬의 열과 동일해야함니다.\n");
		printf("일치하지 않으면 재입렵\n\n");
		printf("두 번째 행렬의 행과 열을 입력: ");
		scanf("%d %d", &row2, &col2); 
	}
	a=(int**)malloc(sizeof(int*)*row1);
	
	for(i=0; i<row1; i++)
	{
		a[i]=(int*)malloc(sizeof(int)*col1);
	}
	b=(int**)malloc(sizeof(int*)*row2);
	
	for(i=0; i<row2; i++)
	{
		b[i]=(int*)malloc(sizeof(int)*col2);
	}
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			a[i][j]=rand()%10;
		}
	}
	printf("\na배열 출력\n");
	print_matrix(a, row1, col1);
	for(i=0; i<row2; i++)
	{
		for(j=0; j<col2; j++)
		{
			b[i][j]=rand()%10;
		}
	}
	
	printf("b배열 출력\n");
	print_matrix(b, row2, col2);
	multiply_matrix(a, b, row1, col1, row2, col2);
	
	for(i=0; i<row1; i++)
	{
		free(a[i]);
	}
	for(i=0; i<row2; i++)
	{
		free(b[i]);
	}
	free(a);
	free(b);
	
	return 0;
}
