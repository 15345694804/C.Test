#include <stdio.h>
/*
 *  do while循环语句
 */
int main1(){
    int  i = 1;

    do{
        printf("%d\n",i);
        i++;
    } while (i < 10);

    return 0;
}

int main(){
    //水仙花数 个位数的三次方 + 十位数的三次方 + 百位数的三次方 = 自身
    int i = 100;

    do{
        int a = i %10;  //个位数
        int b = i/10%10;    //十位数
        int c = i/100;  //百位数

        if (a*a*a + b*b*b + c*c*c == i) {
            printf("%d\n",i);
        }
        i++;

    }while (i <= 999);
}