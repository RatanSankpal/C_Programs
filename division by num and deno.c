#include<stdio.h>

int divide(float no1, float no2, float *res)
{
	if(no2==0)
		return 1;
	
	*res=no1/no2;
	return 0;
}

int main()
{
	float no1, no2, res;
	int status;
	printf("\nEnter numerator:");
	scanf("%f", &no1);
	printf("\nEnter denominator:");
	scanf("%f", &no2);

	status = divide(no1,no2,&res);

	if(status==1)
		printf("Error:Division by zero\n");
	else
		printf("Division Result = %.2f \n",res);
	return 0;

}