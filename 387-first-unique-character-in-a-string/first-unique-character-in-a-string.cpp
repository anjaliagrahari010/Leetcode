class Solution {
public:
    int firstUniqChar(string s) {
        int freq[256]={0};
        for(char ch:s){
            freq[ch]++;
        }
        for(int i=0;i<s.size();i++){
            if(freq[s[i]]==1){
                return i;
            }
        }
        return -1;
        // unordered_map<char,int>m;
        // queue<int>q;
        // for(int i=0;i<s.size();i++){
        //     if(m.find(s[i]) == m.end()){
        //         q.push(i);
        //     }
        //     m[s[i]]++;

        //     while(q.size()>0 && m[s[q.front()]]>1){
        //         q.pop();
        //     }
        // }
        // if(q.empty())
        //     return -1;
        // return q.front();
    }
};