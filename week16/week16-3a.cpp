#include <stdio.h>
int main(){
	int a,b=1;
	scanf("%d",&a);
	while(a>0){
		printf("%d ",a%10*b);
		a/=10;
		b*=10;
	}
}
