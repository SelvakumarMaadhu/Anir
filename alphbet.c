#include<stdio.h>
#include<conio.h>
void main()
{
char c;
int isLowercaseVowel, isUppercaseVowel;
printf("enter an alphbet");
scanf("%c",&c);
isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel:", c);
    else
        printf("%c is a consonant:", c);
}
getch();
}
