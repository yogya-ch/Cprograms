//Matrix multiplication using 2D arrays

#include<stdio.h>


int main()
{
    int i,j,m,n,x,k;
    int a[10][10];;
    int b[10][10];
    int c[10][10];
    printf("Give the number of rows and columns ");
    scanf("%d,%d",&m,&n);
    
    printf("Matrix 1\n");       // Input of matrix 1
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    printf("Matrix 2\n");       // Input of matrix 2
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    
    for(i=0;i<m;i++)            // Multiplication
    {
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                x=x+(a[i][j]*b[j][i]);
            }
            c[i][j]=x;
        }
    }
    
    for(i=0;i<m;i++)            // display
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    

    
}
