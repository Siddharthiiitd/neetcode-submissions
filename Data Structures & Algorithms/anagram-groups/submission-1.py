class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = {}
        for s in strs:
            sortedS = ''.join(sorted(s));
            if(sortedS not in result):
                result[sortedS]=[];
            
            result[sortedS].append(s)
        return list(result.values())