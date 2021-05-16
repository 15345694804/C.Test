#include <stdio.h>
/*
 *  二维数组 2行3列 换成 3行2列
 */
int main(){
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[3][2];
    int i,j;

    printf("array a:\n");

    for(i=0;i<=1;i++){  //i相当于第一维数组
        for(j=0;j<=2;j++){  //j相当于第二维数组
            printf("%5d",a[i][j]);  //第一次j循环 a[0][0] 第二次j循环 a[0][1] 第三次j循环a[0][2]   第一次i循环a[1][0] 第二次i循环a[1][1] 第三次i循环a[1][2]
            b[j][i]=a[i][j];        //第一次j循环 b[0][0]           b[1][0]          b[2][0]             b[0][1]          b[1][1]          b[2][1]
        }
        printf("\n");
    }


    printf("array b:\n");

    for (int i = 0; i <= 2; i++) {
        for(j=0;j<=1;j++){
            printf("%5d",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}