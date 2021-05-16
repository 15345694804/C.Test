#include <stdio.h>
/*
 *  while与do-while的比较
 *      定义i<=10,如果输入i的值在这个范围，那么结果相同
 *      如果输入i的值大于10，那么do-while循环会比while循环先运行一次
 *      而while先进行判断，开始即判断为假，所以一次也不执行
 */
int main(){
    int i;
    int sum = 0;

    printf("请输入i的值:");
    scanf("%d",&i);

    //while语句
    while (i<10){
        sum+=i;
        i++;
    }

    printf("while循环得到的结果是： %d\n",sum);

    //do-while语句
    do{
        sum+=i;
        i++;
    } while (i<=10);

    printf("do-while得到的值是: %d",sum);

    return 0;
}