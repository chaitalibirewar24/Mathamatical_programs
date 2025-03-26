#include<stdio.h>
#include<math.h>

int print_spiral(int a[20][20],int n,int m)
{
    int i,j,min;
    printf("SPIRAL PRINTING:\n");
    if(m<=n)
    {min=m;}
    else{min=n;}
    for(int k=1;k<min;k++)
    {
       
        for(i=k;i<k+1;i++)
        {  
            for(j=k;j<=m-k+1;j++)
            {
            
                   printf("%d ",a[i][j]);
                
            }     
        }//printf("\n");
        for(i=k+1;i<=n-k+1;i++)
        {  
            for(j=m-k+1;j>m-k;j--)
            {
                    printf("%d ",a[i][j]);
            }
            
        }
        for(i=n-k+1;i>n-k;i--)
        {  
            for(j=m-k;j>=k;j--)
            {
                    printf("%d ",a[i][j]);
                
            }
            
        }
        for(i=n-k;i>=k+1;i--)
        {  
            for(j=k;j<k+1;j++)
            {
                    printf("%d ",a[i][j]);
                
            }
            
        }
    }
}

int main()
{
    int i, j;
    static int a[20][20];
    int n,m;
    printf("enter rows and columns:\n");
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("Enter value of a[%d][%d]:\n",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            
            printf("%d ",a[i][j]);
        }printf("\n");
    }
    print_spiral(a,n,m);
    return 0;
}