//week14-2.cpp
#include <stdio.h>
int main(){
    char c;
    char s[100];
    printf("請輸入一行字可以有空格直到跳行結束");
    gets(s);
    printf("你讀了:%s\n",s);

    printf("請輸入英文名字(不能有控格)");
    scanf("%s",s);
    printf("your name is :%s",s);

    printf("input your name again:");
    scanf("%c",&c);
    printf("結果讀到了:%c",c);
}
