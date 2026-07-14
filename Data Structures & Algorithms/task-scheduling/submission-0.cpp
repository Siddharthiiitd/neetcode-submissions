class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> count (26,0);
        for(int i=0; i<tasks.size(); i++){
            count[tasks[i]-'A']++;
        }

        int maxf = *max_element(count.begin(),count.end());
        int maxcnt=0;

        for(auto x : count){
            if(x == maxf){
                maxcnt++;
            }
        }

        int time = (maxf-1)*(n+1) + maxcnt;
        return max(time, (int)tasks.size());
    }
};
