class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>m;
        for(int x : arr){
            m[x]++;
        }
        
        int lucky = -1;
        for(auto it:m){
            int num = it.first;
            int count = it.second;
            if(num==count)
                lucky = max(lucky,num);
        }
        return lucky;
    }
};