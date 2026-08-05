class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> Q;
        for(int i=0; i<students.size(); i++){
            Q.push(students[i]);
        }
        int n = students.size();
        for(int sandwich: sandwiches){
            int res =0;
            while(res<n && Q.front() != sandwich){
                Q.push(Q.front());
                Q.pop();
                res++;
            }
            if(Q.front() == sandwich){
                Q.pop();
                res--;
            }
            else{
                break;
            }
        }
        return Q.size();
    }
};