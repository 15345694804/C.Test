#include <stdio.h>
/*
 *  输出   *
         * *
        *   *
         * *
          *
 */
int main(){
    char a[5][5]={{' ',' ','*'},{' ','*',' ','*'},{'*',' ',' ',' ','*'},{' ','*',' ','*'},{' ',' ','*'}};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            printf("%c",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}