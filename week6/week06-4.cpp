//LT3005
int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={};//参璸计瞷Ω计(–皚柑常穦干0
    int best=0;
    for(int i=0;i<numsSize;i++){
        int now =nums[i];//参璸计琌NOW
        a[now]++;//瞷计NOW参璸Ω计a[now]++
        if(a[now]>best) best=a[now];

    }
    int ans=0;
    for(int i=1;i<=100;i++){

        if(a[i]==best) ans+=a[i];

    }
    return ans;
}
