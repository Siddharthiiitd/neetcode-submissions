class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = dict()
        for i in range(len(nums)):
            comp = target - nums[i]
            if( comp in map ):
                if( i < map[comp]):
                    return [i,map[comp]]
                else:
                    return [map[comp],i]
            map[nums[i]]=i;
        return []