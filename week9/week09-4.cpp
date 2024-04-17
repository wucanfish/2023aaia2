#include <stdio.h>
#include <string.h>
int main(){

    char line[100];
    printf("輸入一堆字母不要空格:\n");
    scanf("%s",line);

    int N=strlen(line);
    printf("字串長度是%d\n",N);
    //strcpy(a,"boy"); 字串拷貝
    //strcpy(a,b); 字串結合右邊 的B接到左邊的A後面
    //strcmp(a,b); 字串比較(逐字母比較
}
