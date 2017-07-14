#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[100],temp;
int i,j=0;
printf("Enter the string");
scanf("%s",str);
i=0;j=strlen(str)-1;
while(i<j)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
i++;
j--;
}
printf("Reverse string is:%s",str);
getch();
}
