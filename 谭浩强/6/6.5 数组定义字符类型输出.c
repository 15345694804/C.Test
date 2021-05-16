#include <stdio.h>
/*
 *  数组定义字符类型输出
 */
int main(){
    char c[15]={'I',' ','a','m',' ','a',' ','s','t','u','d','e','n','t','.'};   //!只能少不能多， 少的用 \0 代替
    int i;

    for(i=0;i<15;i++){
        printf("%c",c[i]);
    }

    printf("\n");

    return 0;
}