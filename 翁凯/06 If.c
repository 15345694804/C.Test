#include <stdio.h>
/*
    输入年龄，判断年龄段
 */
int main(){
    const int MINOR = 35;   //使用const关键字定义固定值35

    int age = 0;

    printf("请输入你的年龄:");
    scanf("%d",&age);

    printf("你的年龄是%d岁。\n",age);

    if(age < MINOR){
        printf("年起是美好的");
    } else{
        printf("生而为人，我很抱歉。\n");
    }

    return 0;
}
