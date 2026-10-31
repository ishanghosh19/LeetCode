int maxArea(int* height, int heightSize) {
    int left = 0, right = heightSize - 1;
    int max = 0;
    
    while (left < right) {
        int width = right - left;
        int h = (height[left] < height[right]) ? height[left] : height[right];
        int val = width * h;
        
        if (max < val) {
            max = val;
        }
        
        if (height[left] < height[right]) {
            left++;
        } else 
            right--;
        
    }
    
    return max;
}