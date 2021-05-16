#include <stdio.h>
#include <math.h>

//定义一个函数sum(用以计算a~b的总和)
void sum(int begin,int end){
    int i;
    int sum = 0;
    for(i = begin;i <= end;i++){
        sum+=i;
    }
    printf("%d~%d的和是%d\n",begin,end,sum);
}
+
int main() {
    //调用函数
    sum(1,10);  //!不管有没有参数，函数调用后必须加()
    sum(20,30);
    sum(30,50);

    return 0;
}