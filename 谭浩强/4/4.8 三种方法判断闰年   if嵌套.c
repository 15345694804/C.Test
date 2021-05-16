#include <stdio.h>
/*
 *  year % 4 == 真
 *  year % 100 == 假
 *  (year % 100 = 0)&&(year % 400 == 0) == 真
 */
int main(){
    /*!第一种方法，正常if嵌套 */
    int year;
    int leap;   //!也可以使用bool定义leap为逻辑类型，下方leap = false或true
    scanf("%d",&year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                leap = 1;   //!若leap为逻辑型，该处leap可以赋值为false或true
            }else{
                leap = 0;
            }
        }else{
            leap = 1;
        }
    }else{
        leap = 0;
    }

    if(leap == 1){
        printf("%d 是闰年",year);
    }else{
        printf("%d 是非闰年",year);
    }

    /*! 第二种方法，正常if语句 不嵌套*/

    if(year % 4 != 0){
        leap = 0;
    }
    else if(year % 100 != 0){
        leap = 1;
    }
    else if(year % 400 != 0){
        leap = 0;
    }
    else{
        leap = 1;
    }

    if(leap == 1){
        printf("%d 是闰年",year);
    }else{
        printf("%d 是非闰年",year);
    }

    /*! 第三种方法，使用逻辑表达式包含所有的闰年条件*/

    if (year % 4 == 0 && year % 100 != 0)||(year % 400 == 0){
        leap = 1;
    }
    else{
        leap = 0;
    }

    if(leap == 1){
        printf("%d 是闰年",year);
    }else{
        printf("%d 是非闰年",year);
    }
    return 0;
}