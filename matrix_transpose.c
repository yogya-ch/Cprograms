//Transpose of matrix

#include<stdio.h>

int main()
{
    int i,j,m,n,x;          //Doesn't work for a[m][n]
    int a[10][10];
    int b[10][10];
    printf("Give the number of rows and columns ");
    scanf("%d,%d",&m,&n);
    
    printf("Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    
    for(i=0;i<m;i++)            //Transpose
    {
        for(j=0;j<n;j++)
        {
            b[i][j]=a[n-1-j][i];
        }
        
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



}

    
