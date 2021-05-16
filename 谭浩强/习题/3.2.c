#include <stdio.h>
#include <math.h>

int main(){
    float i = 1000;
    float r1,r2,r3,r5,r0;
    float p1,p2,p3,p4,p5;

    r1 = 0.0414;
    r2 = 0.0468;
    r3 = 0.054;
    r5 = 0.0585;
    r0 = 0.0072;

    p1 = i*(1+r5*5);
    p2 = i*(1+r2*2) * (1+r3*3);
    p3 = i*(1+r3*3) * (1+r2*2);
    p4 = i*pow(1+r1,5);
    p5 = i*pow(1+r0/4,4*5);

    printf(" p1 = %f\n p2 = %f\n p3 = %f\n p4 = %f\n p5 = %f",p1,p2,p3,p4,p5);

    return 0;
}