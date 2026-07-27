#include<stdio.h>

int main()
{
      int a,b,c;
      printf("Enter 3 no.s = ");
      scanf("%d%d%d",&a,&b,&c);

      if(a>b)
      { if(a>c)
      {printf("a is greater " , a);}
      else
      {printf("c is greater " , c);} }
      else
      { if(b>c)
      {printf("b is greater " , b);}
      else
      {printf("c is greater " , c);} }

      
}