#include<stdio.h>
#include<conio.h>
void main()
{
int n,count;
printf("enter the integer number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
++count;
}
printf("count:%d",count);
getch();
}
