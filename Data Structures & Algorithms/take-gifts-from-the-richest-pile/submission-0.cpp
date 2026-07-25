class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> Q;
        for(int i=0; i<gifts.size(); i++){
            Q.push(gifts[i]);
        }

        while(k>0){
            int top = Q.top();
            Q.pop();
            top = floor(sqrt(top));
            Q.push(top);
            k--;
        }
        int ans=0;
        while(!Q.empty()){
            ans += Q.top();
            Q.pop();
        }
        return ans;
    }
};