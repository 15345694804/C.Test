#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,disc,x1,x2,p,q;
    printf("请输入a,b,c的值:");
    scanf("%lf %lf %lf",&a,&b,&c);

    disc = b*b - 4*a*c;

    if (disc < 0){
        printf("此方程无实根\n");
    }
    else{
        p = -b/(2.0 * a);
        q = sqrt(disc)/(2.0 * a);
        x1 = p + q;
        x2 = p - q;

        printf("x1 = %7.2f\n x2 = %7.2f\n",x1,x2);
    }

    return 0;
}