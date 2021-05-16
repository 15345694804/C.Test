#include <stdio.h>
#include <math.h>

int fac(int n){
    int y;

    if(n < 0)
    {
        printf("error");
    }
    else if(n == 0 || n == 1)
    {
        y = 1;
    }
    else{
        y = fac(n-1)*n;
    }
}

int main(){
    int x,age;

    printf("请输入x的值：");
    scanf("%d",&x);

    age = fac(x);

    printf("%d的阶乘是%d",x,age);
}
