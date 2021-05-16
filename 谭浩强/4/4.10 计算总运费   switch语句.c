#include <stdio.h>
/*
 *      每吨每千米货物基本运费=p
 *      货物重量=w，距离=s，折扣=d，总运费=f
 *      计算公式： f = p * w * s * (1 - d)
 *                  s < 250      d = 0%
 *          250 <= s < 500       d = 2%
 *          500 <= s < 1000      d = 5%
 *          1000 <= s < 2000     d = 8%
 *          2000 <8= s < 3000     d = 10%
 *                3000 <= s      d = 15%
 */
int main(){
    //结果分析，可以看出上面的距离折扣变化都是250的倍数
    /*
        [1,c,]  d = 0
        [1,c,2) d = 2
        [2,c,4) d = 5
        [4,c,8) d = 8
        [8,c,12) d = 10
        [12,c,+∞) d = 15
     */
    int c,s;    //!定义c  c = s/250
    float w,d,f,p;
    printf("请输入单价 重量(kg) 距离(km):");
    scanf("%f %f %d",&p,&w,&s);

    if(s > 3000){
        c = 3000/250;
    }else{
        c = s/250;
    }

    switch(c){
        case 0:
            d = 0;
            break;
        case 1:
            d = 2;
            break;
        case 2:
        case 3:
            d = 5;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            d = 8;
            break;
        case 9:
        case 10:
        case 11:
            d = 10;
            break;
        case 12:
            d = 12;
            break;
    }

    f = p * w * s * (1 - d/100);
    printf("总运费= %10.2f\n",f);

    return 0;
}