#include <stdio.h>

int main(){
    int a,b,c;
    int max;
    int t;

    printf("请输入三个整数：");
    scanf("%d,%d,%d",&a,&b,&c);

    //第一种方法，if嵌套
    if(a > b){
        if (a > c){
            printf("最大值是a");
        } else{
            printf("最大值是c");
        }
    }else if(b > a){
        if (b > c){
            printf("最大值是b,");
        }else{
            printf("最大值是c,");
        }
    }

    //第二种方法
    max = a;

    if(max < b){
        max = b;
    }
    if(max < c){
        max = c;
    }

    printf("最大值是%d\n",max);

    //第三种方法 互换
    if(a > b){
        t = a;
        a = b;
        b = t;
    }
    if(a > c{
        t = a;
        a = c;
        c = t;
    }
    if(b > c){
        t = c;
        b = c;
        c = t;
    }

    printf("%d,%d,%d\n",a,b,c);

    return 0;
}