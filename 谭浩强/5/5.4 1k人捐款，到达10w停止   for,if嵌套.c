#include <stdio.h>
#define SUM 100000
/*
 *  有1000人，募捐，金额达到10w停止募捐，计算捐款人数和人均捐款数额
*/
int main(){
    float one,all,aver; //one:单词捐款数额 all:捐款总数额 aver：人均捐款数额
    int i;  //捐款人数
    for(i = 1,all = 0;i <= 1000;i++){
        printf("请输入捐款数:");
        scanf("%f",&one);
        all = all + one;

        if(all >= SUM)  //如果达到10w，停止捐款
            break;
    }

    aver = all/i;   //计算人均捐款 总捐款/捐款人数

    printf("捐款人数 %d\n 人均捐款 %f\n",i,aver);

    return 0;
}