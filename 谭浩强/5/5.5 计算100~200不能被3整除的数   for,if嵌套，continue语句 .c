#include <stdio.h>
/*
 *  计算100~200之间不能被3整除的数
*/
int main(){
    for(int i = 100;i <= 300;i++){
        if(i % 3 == 0){     //也可以写成 i % 3 != 0,直接输出i
            continue;   //当i能被3整除，执行continue语句，流程跳转到表示循环体结束的右花括号的前面
        }
        printf("%d ",i);
    }

    printf("\n");

    return 0;
}