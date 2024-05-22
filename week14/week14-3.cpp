#include <stdio.h>
int main(){
    int a=5;
    /*if(a>0){ //if 判斷只做一次
        printf("a:%d\n",a);
    }
    while(a>0){//while 會一值做
            printf("a:%d\\n",a);
    }*/
    //while(1) print("a:1\n");

    if(3) printf("3成立\n");
    if(2) printf("2成立\n");
    if(1) printf("1成立\n");
    if(999) printf("999成立\n");
    if(0) printf("0成立\n");//只有0不成立
    if(-1) printf("-1成立\n");
    if(-2) printf("-2成立\n");
    if(-3) printf("-3成立\n");
}
