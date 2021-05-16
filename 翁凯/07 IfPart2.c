#include <stdio.h>
/*
    出租车3公里内7元，超过3公里每公里2元
*/
int main(){
    const double QiBu = 7;   //起步价
    const int QiBuKM = 3;    //起步公里
    const int DanJia = 2;   //每公里单价
    double pay = 0.0;
    int KM;

    printf("请输入里程:");
    scanf("%d",&KM);

    printf("\n");

    if(KM > QiBuKM)
        pay = QiBu + (KM - QiBuKM) * DanJia;    //if或else后可以不带{},只需在最后一条语句加上;
    else
        pay = QiBu;

    printf("应付金额:%f\n",pay);

    return 0;
}
