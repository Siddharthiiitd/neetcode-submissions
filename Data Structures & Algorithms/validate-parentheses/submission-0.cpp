class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch: s){
            if(ch == '(' || ch =='[' || ch=='{'){
                st.push(ch);
            }
            else if (!st.empty()){
                char poped = st.top();
                st.pop();
                if( (ch==')' && poped !='(')
                    || (ch==']' && poped != '[')
                    || (ch=='}' && poped != '{')){
                        return false;
                    }
            }
            else{
                return false;
            }
        }
        return st.empty();

    }
};
