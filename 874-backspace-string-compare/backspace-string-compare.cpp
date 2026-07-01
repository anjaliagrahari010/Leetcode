class Solution {
public:
    stack<char>build(string s){
        stack<char>st;
        for(char ch:s){
            if(ch != '#'){
                st.push(ch);
            }
            else{
                if(st.size()>0){
                    st.pop();
                }
            }
                
        }
        return st;
    }

    bool backspaceCompare(string s, string t) {
        stack<char>s1 = build(s);
        stack<char>t1 = build(t);
        if(s1.size()!=t1.size())
            return false;
        while(!s1.empty()){
            if(s1.top()!=t1.top()){
                return false;
            }
            s1.pop();
            t1.pop();
        }
        return true;
    }
};