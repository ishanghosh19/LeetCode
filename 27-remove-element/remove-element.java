class Solution {
    public int removeElement(int[] nums, int val) {
        int numsSize=nums.length;
        for(int i=0;i<numsSize;i++){
            if(nums[i]==val){
                
                nums[i] = nums[--numsSize];
                i--;
            }
        }
        return numsSize;
    }
}