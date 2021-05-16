#include <stdio.h>
#include <math.h>

/*
 *  age(1)  c = 10;
 *  age(2)  c = age(1)+2 = 10+2;
 *  age(3)  c = age(2)+2 = 10+2+2;
 */
int age(int n){
    int c;
    if(n == 1){
        c = 10;
    }else{
        c = age(n-1)+2;
    }

    return c;
}

int main(){
    int num5 = age(5);
    int num1 = age(1);

    printf("第五个:%d\n",num5);
    printf("第一个:%d\n",num1);

    return 0;
}