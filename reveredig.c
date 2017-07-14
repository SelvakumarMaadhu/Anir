#include<stdio.h>
#include<conio.h>
void main()
{
int n,num,sum=0,rem;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
sum=sum*10+rem;
n=n/10;
}
printf("Reverse digits %d",sum);
getch();
}
