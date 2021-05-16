#include <stdio.h>
#include <math.h>

float average(float arr[10]){
    int i;
    float aver;
    float sum = arr[0];

    for(i=1;i<10;i++){
        sum+=arr[i];
    }
    aver = sum/10;

    return (aver);
}

int main(){
    float score[10],aver;
    int i;

    printf("请输入十个数:");
    for (i = 0; i < 10; i++) {
        scanf("%f",&score[i]);
    }

    aver=average(score);
    printf("平均数是:%5.2f",aver);

    return 0;
}