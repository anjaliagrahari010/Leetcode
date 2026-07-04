class Solution {
public:
    int reverseDegree(string s) {
        int deg = 0;
        for(int i=0;i<s.size();i++){
            int index = i+1;
            int rev_index = 26 - (s[i]-'a');
            deg += index * rev_index;
        }
        return deg;
    }
};