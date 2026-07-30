#include<stdio.h>
int main()
{
	int a , b , opt;
	printf("\nEnter two numbers:");
	scanf("%d %d",&a , &b);
	printf("\nEnter Choice:");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("\nAdd %d+%d=%d",a , b , a+b);
			break;
		case 2:
			printf("\nSub %d-%d=%d",a , b , a-b);
			break;
		case 3:
			printf("\nMulti %d*%d=%d",a , b , a*b);
			break;
		case 4:
			if(b!=0)
			printf("\nDiv %d/%d=%d",a , b , a/b);
			else
			printf("\nDivision by zero is not allowed");
			break;
		default:
			printf("\nInvalid Choice");

	}
	
	return 0;
}