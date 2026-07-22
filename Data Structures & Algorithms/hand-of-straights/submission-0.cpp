class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        unordered_map<int,int> map;
        for(int num : hand){
            map[num]++;
        }
        sort(hand.begin(),hand.end());

        for(int num : hand){
            if(map[num] >0){
                for(int i=num; i<groupSize+num; i++){
                    if(map[i]==0) return false;
                    map[i]--;
                }
            }
        }
        return true;
   }
};
