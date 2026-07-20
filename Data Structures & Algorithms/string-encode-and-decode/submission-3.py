class Solution:

    def encode(self, strs: List[str]) -> str:
        string = ""
        for i in strs:
            string  = string + i;
            string += ';'
        return string

    def decode(self, s: str) -> List[str]:
        result = s.split(';')
        result.pop()
        return result
        
