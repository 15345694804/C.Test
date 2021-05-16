#include <stdio.h>
/*
 *  for循环语句
 */
int main(){
    for (int i = 0; i < 10; i++) {
        printf("%d\n",i);
    }

    for (int i = 1; i <=9 ; i++) {
        for (int j = 1; j <= i ; j++) {
            printf("%d*%d=%d\t",j,i,i*j);
        }
        printf("\n");
    }

    return 0;
}