#include<stdio.h>
int main()
{
	int n , dig , sum=0 ;
	printf("\nEnter the number:");
	scanf("%d",&n);

	while(n>0)
	{
		dig=n%10;
		sum=sum+dig;
		n=n/10;
	}
	printf("\nResult:%d",sum);
	return 0;
}