#include <stdio.h>
/*
 *  选择结构 if语句
 */
int main1(){
    int score;

    scanf("%d",&score);

    //如果表达式结果为真 执行{}对应的代码
    if(score > 90)
    {
        printf("优秀");

        //if嵌套
        if (score > 95)
        {
            printf("牛逼");
            if (score > 99)
            {
                printf("真牛逼");
            }
        }
    }

    else if (score > 60)
    {
        printf("及格");
    }
    else{
        printf("不及格");
    }

    return 0;
}

//
int main(){
    int a,b,c;

    printf("请分别输入三只小猪的体重:");
    scanf("%d,%d,%d",&a,&b,&c);

    if (a > b)
    {
        if(a > c)
        {
            printf("小猪a最重");
        }
        else
        {
            printf("小猪c最重");
        }
    }

    if (b > c)
    {
        printf("小猪b最重");
    }
    else
    {
        printf("小猪c最重");
    }

    return 0;
}