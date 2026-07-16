#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter you triangle 3 item :");
    scanf("%d %d %d",&a,&b,&c);
    if (a+b>c && b+c>a && a+c>b)
    {
        printf("This is a valid triangle");
    }
    else
    {
        printf("This is not a valid triangle");
    }
    return 0;
}
