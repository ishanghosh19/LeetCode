int countDominantElements(int* nums, int numsSize) {
    if (numsSize <= 0) return 0;
    if (numsSize == 1) return 1;
    int c=0;
    for(int i=1;i<numsSize-1;i++){
        if(nums[i]*2>=nums[i+1]+nums[i-1])
        c++;
    }
    if(nums[0]>=nums[1])
    c++;
    if(nums[numsSize-1]>=nums[numsSize-2])
    c++;
    return c;
}