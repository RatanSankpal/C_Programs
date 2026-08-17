#include<stdio.h>
#include<stdlib.h>
int prime(int n);

int main()
{
      int a,b;
      int i;

    printf("Enter range:");
    scanf("%d %d",&a,&b);

    printf("Prime numbers are=");

    for(i=a;i<=b;i++)
    {
        if(prime(i))
        {
            printf(" %d",i);
        }
    }
    return 0;
}

int prime(int n)
{
       int i;
       if(n<=1)
       {
          return 0;
       }
       else
       {
          for(i=2;i<=n/2;i++)
          {
              if(n%i==0)
              {
                  return 0;
              }
              else{
              return 1;
              }
}


}}