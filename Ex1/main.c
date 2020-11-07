
#include <stdio.h>
#include "myMath.h"



int main(){
    double num;
    printf("Please insert a real number:");
    scanf("%lf", &num);
    
    //2 − 3^𝑥 + 𝑥^𝑒
    double ans1 = sub(add(Exp((int)num), Pow(num,3)) , 2) ;
    printf("The value of f(x)=e^x + x^3-2 at the point : %0.4lf is :%0.4lf\n", num, ans1);
    //3x + 2X^2
    double ans2 = add(mul(num,3),mul(Pow(num,2),2));
    printf("The value of f(x)=3x + 3x^2 at the point : %0.4lf is :%0.4lf\n",num, ans2);
    //(4x^3)/5 -2x
    double ans3 = sub(div(mul(Pow(num,3),4),5),mul(num,2));
    printf("The value of f(x)=(4x^3)/5 - 2x at the point : %0.4lf is :%0.4lf\n", num, ans3);

    return -1;

}

