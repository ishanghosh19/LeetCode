class Solution:
    def minMoves(self, nums: List[int]) -> int:
        max_val = max(nums)
        return sum(max_val - x for x in nums)
#^return len(nums) * max(nums) - sum(nums) this can be done in this way asw (one liner ans)