#include <stdio.h>
int main()
{
	int mat1[100][100];
	int mat2[100][100];
	int diff[100][100];
	int r1, c1, r2, c2;
	int i, j;

	printf("Enter rows in matrix 1:- ");
	scanf("%d", &r1);
	printf("Enter columns in matrix 1:- ");
	scanf("%d", &c1);
	printf("Enter rows in matrix 2:- ");
	scanf("%d", &r2);
	printf("Enter columns in matrix 2:- ");
	scanf("%d", &c2);

	if (r1 == r2 && c1 == c2)
	{
		printf("\nSubtraction is possible\n");
		printf("Enter elements in matrix 1\n");
		//"for" loop for matrix1 input
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				scanf("%d", &mat1[i][j]);
			}
		}

		printf("Enter elements in matrix 2\n");
		//"for" loop for matrix2 input
		for (i = 0; i < r2; i++)
		{
			for (j = 0; j < c2; j++)
			{
				scanf("%d", &mat2[i][j]);
			}
		}

		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				diff[i][j] = mat1[i][j] - mat2[i][j];
			}
		}
		printf("Difference of the matrices is:-\n");
		for (i = 0; i < r1; i++)
		{
			for (j = 0; j < c1; j++)
			{
				printf("%d\t", diff[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("\nSubtraction not possible!\n");
	}
	return 0;
}