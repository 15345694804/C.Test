#include <stdio.h>
/*
 *  switch语句
 */
int main(){
    int day;
    printf("请输入星期数:");
    scanf("%d",&day);

    switch (day) {
        case 1:
            printf("今天星期一");
            break;  //! break返回语句，不可以省略
        case 2:
            printf("今天星期二");
            break;
        case 3:
            printf("今天星期三");
            break;
        case 4:
            printf("今天星期四");
            break;
        case 5:
            printf("今天星期五");
            break;
        case 6:
            printf("今天星期六");
            break;
        case 7:
            printf("今天星期日");
            break;
        default:
            printf("请输入1-7之间的数字");
            break;
    }

    return 0;
}