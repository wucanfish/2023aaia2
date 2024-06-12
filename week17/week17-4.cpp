//Lt75 表
void sortColors(int* nums, int numsSize) {
    int zero=0,one=0,two=0;//非称3表
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)  zero++;//т10
        if(nums[i]==1)  one++;//т11
        if(nums[i]==2)  two++;//т12
    }
    for(int i=0;i<numsSize;i++){//程
        if(i<zero)  nums[i]=0;//程オ常0
        else if(i<zero+one) nums[i]=1;//逞い丁1
        else  nums[i]=2;//逞娩2
    }
}
