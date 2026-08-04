class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        my_dict = defaultdict(int);
        for num in nums:
            my_dict[num]+=1
        
        my_keys = sorted(my_dict, key=my_dict.get, reverse=True)
        ans =[]
        for i in range(k):
            ans.append(my_keys[i])
        return ans