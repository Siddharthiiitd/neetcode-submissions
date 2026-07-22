class Solution {
public:
    bool isvalid(vector<int> list, vector<int> &target){
        if(list[0]<=target[0] && list[1]<=target[1] && list[2]<=target[2]){
            return true;
        }
        return false;
    }
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        unordered_set<int> valid;
        for(auto list : triplets){
            if(!isvalid(list,target)){
                continue;
            }
            for(int i=0; i<3; i++){
                if(list[i]==target[i]){
                    valid.insert(i);
                }
            }
        }
        return valid.size()==3;
    }
};
