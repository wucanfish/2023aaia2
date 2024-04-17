#include <stdio.h>
int main(){
    char line[80];
    printf("請輸入一行英文\n");
    gets(line);
    printf("這行自是:%s\n",line);

    printf("再輸入 一行英文：\n");
    scanf("%s",line);
    printf("這行自是:%s\n",line);

}

