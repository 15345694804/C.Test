#include <stdio.h>
/*
 *  用while循环计算出1~100相加的值
 */
int main(){
    int i = 1;  //定义i初始值为1
    int sum = 0;

    while (i <= 100){
        sum+=i;     //!sum = sum+i
        i++;    //!i = i+1  
    }

    printf("1~100相加的和是: %d",sum);

    return 0;
}