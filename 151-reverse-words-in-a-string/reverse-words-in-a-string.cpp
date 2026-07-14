class Solution {
public:
    string reverseWords(string s) {
        string word;
        reverse(s.begin(),s.end());
        stringstream ss(s);
        string ans="";
        while(ss>>word){
            reverse(word.begin(),word.end());
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};