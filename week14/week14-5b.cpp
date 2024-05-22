#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int space=n-i,star=i*2-1;
		for(int k=0;k<space;k++){
			printf(" ");
		}

		for(int k=0;k<star;k++){
			printf("*");
		}
		printf("\n");
	}

}
}
