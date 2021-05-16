#include <stdio.h>
/*
 *  A 85~100
 *  B 70~84
 *  C 60~69
 *  D 0~60
 */
int main(){
    char grade;
    scanf("%c",&grade);
    printf("you score:");

    switch (grade) {
        case 'A':
            printf("85~100\n");
            break;  //!每条case后面一定要加break返回值
        case 'B':
            printf("70~84\n");
            break;
        case 'C':
            printf("60~69\n");
            break;
        case 'D':
            printf("0~60\n");
            break;
        default:
            printf("error\n");
    }

    return 0;
}