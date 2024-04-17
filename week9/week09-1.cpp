#include <stdio.h>
int main(){

    char c;
    char s[40];
    printf("請輸入 一個字母再輸入英文名子: ");\
    scanf("%c %s",&c,s);
    printf("你的名子是:%s 你輸入的字母是:%c\n",s,c);

}
