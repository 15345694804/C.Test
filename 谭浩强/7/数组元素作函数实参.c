#include <stdio.h>
#include <math.h>

int max(int x,int y){
    return (x > y ? x : y);
}

int main(){
    int a[10],m,i;

    printf("输入十个数:");
    for(i = 0;i < 10;i++){
        scanf("%d",&a[i]);
    }

    for(i=1,m=a[0]; i<10; i++){
        if(max(m,a[i])>m){
            m = max(m,a[i]);
        }
    }
    printf("最大的数是：%d",m);
}