///week17-1.cpp 做到一半的泡泡排序法
#include <stdio.h>
void myprint(int a[10]){
    for(int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main(){
    int a[10]={9,8,7,6,5,4,3,2,1,0};
    myprint(a);
    for(int k=0;k<9;k++){
        for(int i=0;i<10-1;i++){
            if(a[i]>a[i+1]){
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    myprint(a);
}
