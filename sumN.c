#include<stdio.h>
#include<conio.h>
void main()
{
int number,i,sum=0;
printf("enter the number");
scanf("%d",&number);
for(i=1;i<=number;i++)
{
sum=sum+i;
}
printf("sum: %d",sum);
getch();
}
