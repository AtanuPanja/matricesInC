#include <stdio.h>
int main()
{
	int mat[100][100];
	int t[100][100];
	int product[100][100];
	int r1, c1, i, j,k;

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
			scanf("%d", &mat[ i ][ j ]);
		}
	}

	for (i = 0; i < r1; i++)
	{
		for (j = 0; j < c1; j++)
		{
			t [ j ][ i ] = mat[ i ][ j ];
		}
	}
	
	//for loop for multiplication
	for(i = 0; i < r1; i++)
	{
		for(j=0;j<r1;j++)
		{
			product[ i ][ j ] = 0;
			for(k=0;k<c1;k++)
			{
				product[ i ][ j ] += mat[ i ][ k ] * t[ k ][ j ];
			}
		}
	}
	
	printf("\nTranspose of the matrix is:-\n");
	for (i = 0; i < c1; i++)
	{
		for (j = 0; j < r1; j++)
		{
			printf("%d\t", t[ i ][ j ]);
		}
		printf("\n");
	}
	
	printf("\nProduct of matrix with its transpose:-\n");
	for(i = 0;i<r1;i++)
	{
		for(j=0;j<r1;j++)
		{
			printf("%d\t",product[ i ][ j ]);
		}
		printf("\n");
	}

return 0;
}