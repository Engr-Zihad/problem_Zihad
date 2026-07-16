#include <stdio.h>
int main ()
{
    double a,b;
    printf("Enter X & Y :");
    scanf("%lf %lf",&a,&b);
    if (a==0 && b==0)
    {
        printf("The point (%.2lf , %.2lf) at original",a,b);
    }
    else if (a==0)
    {
        printf("The point (%.2lf , %.2lf) at Y-axis",a,b);
    }
     else if (b==0)
    {
        printf("The point (%.2lf , %.2lf) at X-axis",a,b);
    }
     else if (a>0 && b>0)
    {
        printf("The point (%.2lf , %.2lf) at Quadrand-1",a,b);
    }
     else if (a<0 && b>0)
    {
        printf("The point (%.2lf , %.2lf) at  Quadrand-2",a,b);
    }
     else if (a<0 && b<0)
    {
        printf("The point (%.2lf , %.2lf) at  Quadrand-3",a,b);
    }
     else if (a>0 && b<0)
    {
        printf("The point (%.2lf , %.2lf) at  Quadrand-4",a,b);
    }
    return 0;


}
