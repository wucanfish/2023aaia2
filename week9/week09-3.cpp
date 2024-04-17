#include <stdio.h>
int main(){


    printf("輸入10個字母不可有空格:\n");
    char line[11];
    scanf("%s",line);
    printf("這個字是:%s裡面的字分別是:\n");

    for (int i=0;i<11;i++){
        printf("第%d個字母:%c 對應的數字是:%d\n",i,line[i],line[i]);
    }
}
