//Lt75 ��l
void sortColors(int* nums, int numsSize) {
    int zero=0,one=0,two=0;//�ǳ�3�ӱ�l
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)  zero++;//���1��0
        if(nums[i]==1)  one++;//���1��1
        if(nums[i]==2)  two++;//���1��2
    }
    for(int i=0;i<numsSize;i++){//�̫�A��^�h
        if(i<zero)  nums[i]=0;//�̥�����0
        else if(i<zero+one) nums[i]=1;//�ѤU��������1
        else  nums[i]=2;//�ѤU�k���2
    }
}
