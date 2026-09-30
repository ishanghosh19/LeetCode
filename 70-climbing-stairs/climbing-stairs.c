int climbStairs(int n) {
    // 11111;1112;1121;1211;2111;221;212;122;
    if (n <= 2) {
        return n;
    }
    
    int prev2 = 1;
    int prev1 = 2;
    int current = 0;
    
    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return prev1;
}
