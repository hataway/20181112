#include <stdio.h>

void indexAddMat(int a[3][3], int b[3][3]);
void ptrProdMat(int a[3][3], int b[3][3]);

int main()
{
	int a[3][3];
	int b[3][3];

	printf("3*3 �����࿭�� �Է��ϼ���(9���� ����) : ");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf_s("%d", &a[i][j]);
	}

	printf("\n---ù��° ���---\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n3*3 �����࿭�� �Է��ϼ���(9���� ����) : ");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			scanf_s("%d", &b[i][j]);
	}

	printf("\n---�ι�° ���---\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ", b[i][j]);
		}
		printf("\n");
	}

	indexAddMat(a, b);

	ptrProdMat(a, b);
}

void indexAddMat(int a[3][3], int b[3][3])
{
	int c[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
	}

	printf("\n---�� ����� ��---\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ", c[i][j]);
		}
		printf("\n");
	}

}

void ptrProdMat(int a[3][3], int b[3][3])
{
	int c[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int sum = 0;

			for (int k = 0; k < 3; k++)
			{
				sum += *(*(a + i) + k) * *(*(b + k) + j);
			}
			
			*(*(c + i) + j) = sum;
		}
	}

	printf("\n---�� ����� ��---\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%4d ", *(*(c + i) + j));
		}
		printf("\n");
	}
}