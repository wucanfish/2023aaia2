//LT3005
int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={};//�έp�Ʀr�X�{������(�C�Ӱ}�C��l�̳��|��0
    int best=0;
    for(int i=0;i<numsSize;i++){
        int now =nums[i];//�έp�Ʀr�ONOW
        a[now]++;//�{�b�ƦrNOW�έp������a[now]++
        if(a[now]>best) best=a[now];

    }
    int ans=0;
    for(int i=1;i<=100;i++){

        if(a[i]==best) ans+=a[i];

    }
    return ans;
}
