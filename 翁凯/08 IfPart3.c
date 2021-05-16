#include <stdio.h>
/*
    级联的if-else if
        分段函数
        f(x) = -1;x < 0
                0;x = 0
                2x;x>0
 */
int main(){
    int x;
    scanf("请输入x的值: %d",&x);

    int f = 0;

    if(x < 0)
    {
        f = -1;
    }
    else if(x == 0)
    {
        f = 0;
    }
    else
    {
        f = 2 * x;
    }

    printf("f = %d\n",f);

    return 0;
}