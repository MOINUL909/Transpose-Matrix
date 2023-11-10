#include<stdio.h>
int main()
{
    int M[10][10],T[10][10],i,j,row,col;//T=transpose
    printf("Enter number of row and col for the matrix:");
    scanf("%d %d",&row,&col);
    //element of matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("M[%d][%d] = ",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    printf("\n M = \n");
    for(i=0; i<row; i++)
    {

        for(j=0; j<col; j++)
        {
            printf(" %d ",M[i][j]);

        }
        printf("\n");


    }
    //printing transpose matrix
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            T[j][i] = M[i][j];
        }
    }
    printf("\n Transpose matrix:\n");
    for(i=0; i<col; i++)
    {

        for(j=0; j<row; j++)
        {
            printf(" %d ",T[i][j]);

        }
        printf("\n");


    }

}
