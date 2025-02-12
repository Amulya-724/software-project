#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number upto which the sum of even number is required");
    scanf("%d",&n);
    esum(n);
}
int esum(int n)
{
     int sum;
     sum=n*n+n;
     printf("The sum upto %d even number is %d",n,sum);
}