#include <stdio.h>
int isPrime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0) return 0;
    }
    return 1;

}
int main(){
    //printf("你成功n Good");
    printf("輸入一個數");
    int n;
    scanf("%d",&n);
    if(isPrime(n)) printf("N是質數");
    else printf("N不是質數");
}
