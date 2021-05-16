#include <stdio.h>
/*
    面值100，输入价格，计算找零
 */
int main() {
        /*
            const:
                是一个修饰符，加在int前面，用来给这个变量加上一个const(不变的)的属性
                这个const的属性表示这个变相的值一旦初始化，就不能再修改了
                一般const变量用全大写
         */
        const int AMOUNT = 100;
        int price = 0;

        printf("请输入金额:");
        scanf("%d", &price);

        int change = AMOUNT - price;

        if (change > 0) {
            printf("找您%d元\n", change);
        } else {
            printf("您还需要支付%d元\n", change * -1);
        }

        return 0;
    }

