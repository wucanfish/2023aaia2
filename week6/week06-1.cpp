#include <stdio.h>
int main(){
    /// 陣列的宣告和初始直
    int a[4]={10,20,30,40};

    int b[4];///陣列的宣告
    b[0] = 9;///陣列的使用
    b[1] =8;
    b[2]=7;
    b[3]=6;

    for (int i=0;i<4;i++){
        printf("i:%d a[i]:%d b[i]:%d\n",i,a[i],b[i]);
    }///陣列的使用把裡面的質硬出來{FOR 迴圈


}
