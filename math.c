#include <stdio.h>
#include <math.h>
int main(){
   double a,b;
    printf("enter two number :");
    scanf("%lf%lf",&a,&b);
    double sum=a+b;
    double sub=a-b;
    double mul=a*b;
    double div=a/b;
    double mod=fmod(a,b);
    double power=pow(a,b);
    printf("the addition is:%0.2lf\n",sum);
    printf("the subtraction is:%0.2lf\n",sub);
    printf("the multiplication is:%0.2lf\n",mul);
    printf("the division is:%0.2lf\n",div);
    printf("the modulus is:%0.2lf\n",mod);
    printf("the power is:%0.2lf\n",power);
    //operator precedence BODMAS and left to right associativity
    double c ,d ;
    printf("enter two number :");
    scanf("%lf%lf",&c,&d);
     double result=a+b/c*d;
     printf("the result of (a+b/c*d) operator precedence is:%0.2lf\n",result);
    return 0;

}