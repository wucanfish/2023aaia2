#include <stdio.h>
int isPrime(int n){
    for (int i=2;i<n;i++){
        if (n%i==0) return 0;
    }
    return 1;

}
int main(){
    //printf("�A���\n Good");
    printf("��J�@�Ӽ�");
    int n;
    scanf("%d",&n);
    if(isPrime(n)) printf("N�O���");
    else printf("N���O���");
}
