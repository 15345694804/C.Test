#include <stdio.h>
/*
 *  向数组输入十个数，按从小到大排序
 */
int main(){
    int a[10];
    int i,j,t;

    printf("输入10个整数：\n");

    for(i=0;i<10;i++){  //使用for循环，让用户循环输入10次a[i]的值
        scanf("%d",&a[i]);
    }

    for(j=0;j<9;j++) {
        for (i = 0; i < 9 - j; i++) {
            if (a[i] > a[i + 1]) {  //如果a[i]>a[i+1] 互换
                t = a[i];
                a[i] = a[i + 1];    //将小的数调到前面
                a[i + 1] = t;       //!类似于a = t;t=b;b=t
            }
        }
    }
    printf("从小至大排序:\n");

    for(i=0;i<10;i++) {     //依次输出a[i]的值
        printf("%d",a[i]);
        printf("\n");
    }

    return 0;
}