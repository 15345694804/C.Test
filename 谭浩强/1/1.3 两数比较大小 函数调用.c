#include <stdio.h>

int main(){
    int max(int x,int y);   //!对被调用函数max的声明

    int a,b,c;  //定义变量a,b,c
    scanf("%d,%d",&a,&b);
    c = max(a,b);   //!调用max函数，将(z)得到的值赋给c

    printf("max = %d\n",c);     //输出max的值

    return 0;
}

//求两个整数中的较大者的max函数
int max(int x,int y)    //!定义max函数，函数值为整型，形式参数x和y为整型
{
    int z;  //定义变量z，临时存放最大值

    if(x > y){
        z = x;
    }
    else{
        z = y;
    }

    return (z);     //!将z的值作为max函数值，返回到调用max函数的位置
}