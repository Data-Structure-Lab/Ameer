#include<stdio.h>
int add(int ,int );
int main()
{
int num1,num2,sum=0;
printf("Enter two numbers");
scanf("%d %d",&num1,&num2);
sum=add(num1,num2);
printf("Sum is %d\n ",sum);
return 0;
}
int add(int a,int b)
{
return(a+b);
}

