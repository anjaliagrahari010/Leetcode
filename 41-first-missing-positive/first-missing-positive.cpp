class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int missing_num = 1;
        for(int x:nums){
            if(x==missing_num)
                missing_num++;
        }
        return missing_num;
    }
};