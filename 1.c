#include<stdio.h>

int main()
{
        int no1,no2,result;
        printf("Enter 2 no.s= ");
        scanf("%d%d",&no1,&no2);

        if(no2 == 0 )
        {
         printf("Error : Division is not allowed");
        }
        else{
        printf("Result");
        }

        result= no1/no2;
        printf("Result = %d" ,result);

}