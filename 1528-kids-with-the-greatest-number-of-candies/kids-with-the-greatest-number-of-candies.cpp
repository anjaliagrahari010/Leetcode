class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>res;
        int maxCandies = *max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            
            if(candies[i]+extraCandies >= maxCandies){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};