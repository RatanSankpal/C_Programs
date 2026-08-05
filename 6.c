#include<stdio.h>

int main()
{
     int n;
     int i=1;
    
    printf("Enter no = ");
    scanf("%d",&n);

    for( i = 0 ;i <= 10 ; i++ )
    {
     printf(" %d * %d = %d \n",n,i,n*i);
     } 

    return 0;
}