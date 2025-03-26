#include<stdio.h>
int fact(int n)
{
    if(n==0 || n==1)
    {return 1;}
    else{return n*fact(n-1);}
}
void bino(int n)
{
    int a=fact(n);
    int b;
    int coeff;
    for(int i=0;i<n+1;i++)
    {
       b=fact(i)*fact(n-i);
       coeff=a/b;
     
        if(i>0)
        {
            printf("+ ");
        }
        if(coeff>1)
        {
            printf("%d ",coeff);
        }
        if(n-i>0)
        {
            printf("x^%d ",n-i);
        }
        if(i>0)
        {
            printf("y^%d ",i);
        }
        
        
     }
}

int main()
{
    int n;
    printf("enter value of n:\n");
    scanf("%d",&n);
    printf("Binomial Expansion:\n");
    printf("(x+y)^%d = ",n);
    bino(n);
    return 0;
}
