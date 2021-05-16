#include <stdio.h>
#include <math.h>

//函数声明部分
int max(int arr[10]);
int min(int arr[10]);
double avg(int arr[10]);

//主函数调用部分
int main(){
    int arr[10];
    int i;

    printf("输入十个数:");
    for(i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    printf("最大数是:%d",max(arr));
    printf("最小数是:%d",min(arr));
    printf("平均数是:%f",avg(arr));
    return 0;
}

//max函数
int max(int arr[10])
{
    int i,t;
    t = arr[0];

    for(i=0;i<10;i++){
        if(t<arr[i]){
            t = arr[i];
        }
    }

    return t;
}

//min函数
int min(int arr[10]){
    int i,t;
    t = arr[0];

    for(i = 0;i < 10;i++){
        if(t>arr[i]){
            t = arr[i];
        }
    }

    return t;
}

//ave函数
double avg(int arr[10]){
    int i;
    int sum=0;
    double t;

    for(i = 0;i < 10;i++){
        sum+=arr[i];
    }
    t = sum/10;

    return t;
}