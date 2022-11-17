#include<stdio.h>
void main()
{
int sum=0,num,r;
printf("Enter a number");
scanf("%d",&num);
while(num>0)
{
r=num%10;
sum=sum+r;
num=num/10;
}
printf("%d\n",sum);
}

