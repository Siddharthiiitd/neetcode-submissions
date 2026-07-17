class MinStack {
public:
    stack<int> st;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp;
        int ans = INT_MAX;
        while(st.size()){
            ans = min(st.top(), ans);
            temp.push(st.top());
            st.pop();
        }

        while(temp.size()){
            st.push(temp.top());
            temp.pop();
        }
        return ans;
    }
};
