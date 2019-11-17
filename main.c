#include <stdio.h>
#include "myMath.h"

int main()
{
    double num;
    printf("Please insert a real number\n");
    scanf("%lf", &num);

    float ans1,ans2,ans3;

    ans1 = sub(add(Exp((int) num),Pow(num,3)),3);
    printf("The value of f(x)= e^x+x^3-3 at the point of %.4lf is: %.4lf \n", num, ans1);

    ans2 = add(mul(num,3),mul(Pow(num,2),2));
    printf("The value of f(x)= 3x+2x^2 at the point of %.4lf is: %.4lf \n", num, ans2);

    ans3 = sub(div(mul(Pow(num,3),4),5),mul(num,2));
    printf("The value of f(x)= (4x^3)/5-2x at the point of %.4lf is: %.4lf \n", num, ans3);

    return 0;
}
