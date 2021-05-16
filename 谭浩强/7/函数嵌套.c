#include <stdio.h>
#include <math.h>

int max2(int num1,int num2);
int max4(int num1,int num2,int num3,int num4);

int main(){
    int max;
    int a,b,c,d;
    printf("请输入四个数:");
    scanf("%d,%d,%d,%d",&a,&b,&c,&d);
    max = max4(a,b,c,d);
    printf("最大的数是：%d",max);

    return 0;
}

int max4(int num1,int num2,int num3,int num4){
    int t;
    t = max2(num1,num2);
    t = max2(t,num3);
    t = max2(t,num4);

    return(t);
}

int max2(int num1,int num2){
    int t;
    if(num1 > num2){
        t = num1;
    }else {
        t = num2;
    }

    return (t);
}