#include <stdio.h>
int main(){


    printf("��J10�Ӧr�����i���Ů�:\n");
    char line[11];
    scanf("%s",line);
    printf("�o�Ӧr�O:%s�̭����r���O�O:\n");

    for (int i=0;i<11;i++){
        printf("��%d�Ӧr��:%c �������Ʀr�O:%d\n",i,line[i],line[i]);
    }
}
