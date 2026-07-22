class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> lastidx;
        for(int i=0; i<s.size(); i++){
            lastidx[s[i]]= i;
        }

        vector<int> result;
        int size=0;
        int end=0;

        for(int i=0; i<s.size(); i++){
            size++;
            end = max(end, lastidx[s[i]]);
            if(i==end){
                result.push_back(size);
                size=0;
                
            }
        }

        return result;
    }


};
