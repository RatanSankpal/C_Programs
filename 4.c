 #include<stdio.h>

int main()
{
     int no,org,rev=0,dig;

     printf("Enter 5 digit no = ");
     scanf("%d",&no);

    org= no;
    while(no>0)
    {
     dig = no%10;
     rev = rev*10 + dig;
     no = no/10; }

    if( org == rev )
    { printf("Palindrome "); }
    else
    { printf("Not Palindrome "); }
}