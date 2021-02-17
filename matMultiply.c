#include<stdio.h>
int main()
{
	int mat1[100][100];
	int mat2[100][100];
	int product[100][100];
	int r1,c1,r2,c2;
	int i,j,k;
	printf("Enter rows in matrix 1:- ");
	scanf("%d",&r1);
	printf("Enter columns in matrix 1:- ");
	scanf("%d",&c1);
	printf("Enter rows in matrix 2:- ");
	scanf("%d",&r2);
	printf("Enter columns in matrix 2:- ");
	scanf("%d",&c2);
	if( c1 != r2 )
	printf("\nMultiplication not possible !");
	else
	{
		printf("\nMultiplication is possible\n");
		printf("Enter elements in matrix 1\n");
		//"for" loop for matrix1 input
		for( i = 0; i < r1; i++ )
		{
			for( j = 0; j < c1; j++ )
			{
				scanf("%d",&mat1[i][j]);
			}
		}
		
		printf("Enter elements in matrix 2\n");
		//"for" loop for matrix2 input
		for( i = 0; i < r2; i++ )
		{
			for( j = 0; j < c2; j++ )
			{
				scanf("%d",&mat2[i][j]);
			}
		}
		//"for" loop for multiplication 
		for( i = 0; i < r1 ; i++ )
		{
			for( j = 0; j < c2 ; j++ )
			{
				product[i][j] = 0;
				for( k = 0; k < r2 ; k++ )
				{
					product[i][j] += mat1[i][k] * mat2[k][j];
				}
			}
		}
		printf("Product of the matrices is\n");
		for( i = 0; i < r1; i++ )
		{
			for( j = 0; j < c2; j++ )
			{
				printf("%d\t",product[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}