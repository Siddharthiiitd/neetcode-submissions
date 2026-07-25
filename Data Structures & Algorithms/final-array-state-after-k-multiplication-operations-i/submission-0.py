class Solution:
    def getFinalState(self, nums: List[int], k: int, multiplier: int) -> List[int]:
        for i in range(k):
            ele = min(nums)
            idx = nums.index(ele)
            ele = ele* multiplier
            nums[idx]=ele
        return nums