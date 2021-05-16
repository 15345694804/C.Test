#include <stdio.h>

int main(){
    char ch;
    printf("请输入一个字母：");
    scanf("%c",&ch);

    ch = (ch >= 'A' && ch <= 'Z')?(ch + 32) : ch;
    printf("%c",ch);

    return 0;
}