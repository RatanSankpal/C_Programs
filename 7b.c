 #include<stdio.h>
int main()
{
	int n , dig , rev=0 ;
	printf("\nEnter the number:");
	scanf("%d",&n);

	while(n>0)
	{
		dig=n%10;
		rev=rev*10+dig;
		n=n/10;
	}
	printf("\nReverse Number:%d",rev);
	return 0;
}