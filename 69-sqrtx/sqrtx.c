int mySqrt(int x) {
    if (x == 0) return 0;

    int i, max = 0;
    for (i = 1; i <= x; i++) {
        // Equivalent to i * i <= x, but prevents integer overflow
        if (i <= x / i) {
            max = i;
        } else {
            break; // Stop immediately once i becomes too large
        }
    }
    return max;
}