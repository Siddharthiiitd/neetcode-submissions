class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False

        vallist = [0]*26;
        for i  in range(len(s)):
            vallist[ord(s[i]) - ord('a')]+=1
            vallist[ord(t[i]) - ord('a')]-=1
        for i in vallist:
            if i!=0:
                return False
        return True
