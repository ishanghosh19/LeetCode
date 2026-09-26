class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        c = 0
        max1 = 0
        for i in nums:
            if i == 1:
                c += 1
                max1 = max(max1, c)
            else:
                c = 0
        return max1