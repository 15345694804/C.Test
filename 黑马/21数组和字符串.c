#include <stdio.h>
/*
 *  数组
 */
int main(){
    //!数组类型 数组名[元素个数n]={值1，值2，值3,...,值n}
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    //!数组下标 数组名[下标]
    //数组下标是从0开始的
    printf("%d\n",arr[0]);
x
    /*使用for循环显示所有数组值*/
    for(int i = 0;i < 10;i++){
        printf("%d\n",arr[i]);
    }


    /*数组元素参与计算*/
    arr[3] = arr[5];
    arr[2] = arr[4] * 2;

    for(int i = 0;i < 10;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }


    /*数组在内存中存储方式和大小*/
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);

    /*数组元素大小*/
    printf("%d\n",sizeof(arr[0]));

    return 0;
}