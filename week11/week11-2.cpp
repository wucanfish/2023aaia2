#include <stdio.h>
int func(int n) {
    if(n==1) return 1;
    return n * func(n-1);
}
int main()
{
    printf("�п�J1�ӼƦr: 4");
    int n=4;
    //scanf("%d", &n);
    int ans = func(n);
    printf("���׬O:%d", ans);
}
