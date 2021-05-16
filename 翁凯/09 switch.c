#include <stdio.h>

int main(){
    int type;
    scanf("%d",&type);

    switch (type){
        case 1:
            printf("今天星期一");
            break;
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
            printf("啊？什么啊？");
            break;
    }
}