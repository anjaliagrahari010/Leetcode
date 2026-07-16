class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream ss(title);
        string word;
        string ans="";
        while(ss>>word){
            for(int i=0;i<word.length();i++){
                if(word.length()==1 || word.length()==2)
                    word[i]=tolower(word[i]);
                else 
                    word[0]=toupper(word[0]);
                word[i]=tolower(word[i]);
            }
            ans+=word+" ";
        }
        ans.pop_back();
        return ans;
    }
};