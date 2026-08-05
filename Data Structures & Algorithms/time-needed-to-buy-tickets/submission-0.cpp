class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int n = tickets.size();
        queue<int> Q;
        for(int i=0; i<n; i++){
            Q.push(i);
        }

        int time =0;
        while(!Q.empty()){
            time++;
            int idx = Q.front();
            Q.pop();
            tickets[idx]--;
            if(tickets[idx] ==0 && idx ==k){
                return time;
            }
            else if (tickets[idx] >0){
                Q.push(idx);
            }
        }
        return time;
    }
};