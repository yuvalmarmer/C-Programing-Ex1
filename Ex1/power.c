#include <stdio.h>
#include "myMath.h"
#include <math.h>

#define EXP 2.71828


double Pow(double x , int y){
    if(x==0 || y==0) return 0;
    double sum = x;
    for(int i=1; i<y;i++){
        sum*=x;
    }
    return sum;
}

double Exp(int x){
    double ans = Pow(EXP,x);
    return ans;
}
