int countDominantElements(int* nums, int numsSize) {
    if (nums == NULL || numsSize <= 0) {
        return 0;
    }
    if (numsSize == 1) {
        return 1;
    }

    int c = 0;

    if (nums[0] >= nums[1]) {
        c++;
    }

    for (int i = 1; i < numsSize - 1; i++) {
        long long neighborSum = (long long)nums[i - 1] + (long long)nums[i + 1];
        if ((long long)nums[i] * 2 >= neighborSum) {
            c++;
        }
    }

    if (nums[numsSize - 1] >= nums[numsSize - 2]) {
        c++;
    }

    return c;
}