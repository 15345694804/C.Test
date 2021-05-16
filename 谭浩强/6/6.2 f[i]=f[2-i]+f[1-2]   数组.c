#include <stdio.h>
/*
 *  f[i]=f[i-2]+f[i-1]  20个数
 */
int main(){
    int i;
    int f[20]={1,1};    //对最前面的两个元素赋值

    for(i = 2;i < 20;i++){
        f[i]=f[i-2]+f[i-1];     //先后求出f[2]~f[19]的值
    }
    for(i = 0;i < 20;i++){  //依次输出f[i]的值
        if (i % 5 == 0) {   //没输出五个，换一行
            printf("\n");
        }
        printf("%12d",f[i]);    //%12d意为输出12位整数，不够12位按右对齐
    }

    return 0;
}