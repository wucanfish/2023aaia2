#include <stdio.h>
int isPrime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0) return 0;
    }
    return 1;
}
int main(){
    printf("輸入一個數");
    int n;
    int ans=0;
    scanf("%d",&n);
    for (int i=2;i<=n;i++){
        if(isPrime(i)){
          printf("%d ",i);
          ans++;
        }
    }
    printf("總共有 %d 個質數",ans);
}

