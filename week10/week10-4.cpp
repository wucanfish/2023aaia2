#include <stdio.h>
int Z=100; ///�~���������ܼ�
void myFunction()
{
    int x=20;  ///�̭����ϰ��ܼ�
    printf("myFunction()�̭���  X:%d  Z:%d\n",x,Z);
    printf("�b���}�ɡA�� X �M Z ���]��0\n");
    x = 0;
    Z = 0;
}

int main()
{
    int x=10;
    printf("main()�̭���        X:%d  Z:%d\n",x,Z);
    myFunction();
    printf("main()�̭���        X:%d  Z:%d\n",x,Z);

}
