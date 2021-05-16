#include <stdio.h>
/*
 *  while循环语句
 */
int main(){
    //打印1-100之间所有的偶数
    int i = 1;

    while (i <= 100){
        //嵌套if
        if (i % 2 == 0){
            printf("%d\n",i);
        }
        i++;
    }

    //7的倍数 个位带7 十位带7
    while (i < 100) {
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
            printf("敲桌子\n");
        } else{
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}