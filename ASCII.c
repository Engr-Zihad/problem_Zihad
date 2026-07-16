#include <stdio.h>
int main ()
{
    char ch;
    int a;
    printf("Enter your item :");
    scanf(" %c",&ch);
    a = ch;
   if (a<=90 && a>=65)
    {
        printf("%c is a Uppercase",ch);
    }
   else if (a<=122 && a>=97)
    {
        printf("%c is a lower case",ch);
    }
   else if (a<=57 && a>=48)
    {
        printf("%c is a digit",ch);
    }
    else
    {
        printf("%c is a special character",ch);
    }
    return 0;
}
