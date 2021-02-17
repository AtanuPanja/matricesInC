#include <stdio.h>
int main()
{
	int mat[100][100];
	int transpose[100][100];
	int r1, c1, i, j;

	printf("Enter rows in matrix:- ");
	scanf("%d", &r1);
	printf("Enter columns in matrix:- ");
	scanf("%d", &c1);
	printf("Enter elements in matrix\n");
	//"for" loop for matrix input
	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			scanf("%d", &mat[i][j]);
		}
	}

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			transpose[j][i] = mat[i][j];
		}
	}
	printf("Transpose of the matrix is:-\n");
	for (i = 0; i < c1; i++)
	{
		for (j = 0; j < r1; j++)
		{
			printf("%d\t", transpose[i][j]);
		}
		printf("\n");
	}

return 0;
}