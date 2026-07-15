#include <stdio.h>
int main ()
{
    int a;
    printf("Enter your year :");
    scanf("%d",&a);
    if(a%400==0 || (a%4==0 && a %100!=0))
    {
        printf("%d is a leap year\n",a);
    }
    else
    {
        printf("%d is not a Leap year\n",a);
    }
    return 0;
}
