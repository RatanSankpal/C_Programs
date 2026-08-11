#include<stdio.h>
int main()
{
	int no ,n , dig , arms=0 ;
	printf("\nEnter the number:");
	scanf("%d",&no);
        n=no;

       if ( n== 0)
       {
         arms= 0; 
       }
	
	while(n>0)
	{
		dig=n%10;
		arms=arms+(dig*dig*dig);
		n=n/10;
	}
	if(arms==no)
	printf("\n Armstrong number");
	else
	printf("\n Not Armstrong number");
	return 0;
}