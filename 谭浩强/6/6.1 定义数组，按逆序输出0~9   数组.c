#include <stdio.h>
/*
 *      对十个元素数组依次赋值0，1，2，3，4，5，6，7，8，9；并按逆序输出
 */
int main(){
    int a[10];  //定义一个有10个元素的数组，为a
    int i;

    for(i = 0;i < 10;i++){  //使用for循环对数组a依次赋值
        a[i]=i;
    }

    for(i = 9;i >= 0;i--){  //使用for循环对数组a按逆序输出
        printf("%d\n",a[i]);
    }

    return 0;
}