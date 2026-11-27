int smallestIndex(int* nums, int numsSize) {
    int n,r,s;
    for(int i=0;i<numsSize;i++){
        n=nums[i];
        s=0;
        while(n>0){
            r=n%10;
            s+=r;
            n/=10;
        }
        if(s==i)
        return i;
    }
    return -1;

}