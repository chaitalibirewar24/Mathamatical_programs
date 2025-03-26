// Code for addition modulo table of integer

#include<stdio.h>
int table(int n)
{
    int i,j;
    int sum;
    printf("Addition modulo table of 'Z(%d)+':\n",n);  
    //printing first row
    printf("Z(%d)+|\t",n);
    for (j = 0; j < n; j++)
        printf("%d\t", j);
    printf("\n");

    for (j = 0; j <= n; j++)
        printf("--------");
    printf("\n");

    for(i=0;i<n;i++)  //outer loop for rows
    {
        printf("%d    |\t", i);
        for(j=0;j<n;j++) // inner loop as colums
        {
            sum=(i+j)%n;   // addition of rows and column values
            printf("%d\t",sum); // modn format and printing the table
           
        }printf("\n");
    }return 0;
}


int main()
{
    int n;
    printf("enter the value of n in Z(n):\n"); // accepting value from user
    scanf("%d",&n);       // storing the value
    table(n);           // function call
    return 0;
}