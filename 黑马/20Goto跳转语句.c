#include <stdio.h>
/*
 *  goto跳转语句
 */
int main(){
    int i = 0;
    int j = 0;

    for(i ;i < 10;i++){
        if(i == 5)
        {
            goto FLAG;
        }
        printf("i = %d\n",i);
    }

    for (j = 0;j < 10;j++) {
        FLAG:
        printf("j = %d\n",j);
    }

    return 0;
}