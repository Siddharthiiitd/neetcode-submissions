class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dict1 =  defaultdict(int)
        for i in range(len(nums)):
            dict1[nums[i]] +=1;
        
        sorted_keys = sorted(dict1, key=dict1.get, reverse=True)
        ans=[]
        for i in range(k):
            ans.append(sorted_keys[i])
        
        return ans