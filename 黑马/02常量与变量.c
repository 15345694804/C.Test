#include <stdio.h>
/*
 * 常量与变量
 *      需求：香蕉3元一斤，买五斤，需要花费多少钱
 */
int main(void){
    //const关键字: 定义常量
    //常量:运行过程中，值不能发生改变的量
    const int price = 3;

    int weight = 5;

    int sum = price * weight;

    printf("总价为: %d \n",sum);

    return 0;
}