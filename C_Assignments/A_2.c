// Shubham Chouhan
//C_Programming Assignment_1 Ques-2
/*  write a function to multiply two metrices nxn and put result in a third matrix, what is order of runtime? */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int row,col;
    int i,j,k;
    printf("enter the no of rows : \n");
    scanf("%d",&row);
    printf("enter the no of column : \n");
    scanf("%d",&col);
    int c[row][col];
    int* a[row]; int* b[row];	
    for(int c =0 ; c<row ; c++)
	{
   	 a[c] = (int*)malloc(col*sizeof(int));
   	 b[c] = (int*)malloc(col*sizeof(int));
	}
    if(row==col)
    {

    
        // for first matrix
        printf("Enter the first matrix element\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
				
                scanf("%d",&a[i][j]);
            }
        }
        // for second matrix
        printf("Enter the second matrix element\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
		
                scanf("%d",&b[i][j]);
            }
        }

        // now for multiplication
        printf("multiplication of the matrix is \n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                c[i][j] = 0;
                for(k=0;k<col;k++)
                {
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        // print the result in third matrix
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d\t",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    printf("THE NO OF ROWS AND COLUMN MUST BE SAME\n");
    for(int c =0 ; c<row ; c++){
    free(a[c]);
    free(b[c]);}
    return 0;
}
