class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int l=0;
        long long sum=0;
        long long maxSum=0;
        unordered_map<int,int>freq;
        for(int r=0;r<nums.size();r++){
            sum+=nums[r];
            freq[nums[r]]++;

            if(r-l+1>k){
                freq[nums[l]]--;
                sum-=nums[l];
                if(freq[nums[l]]==0){
                    freq.erase(nums[l]);
                }
                
                l++;
            }

            if(r-l+1==k){
                if(freq.size()==k)
                    maxSum=max(maxSum,sum);
            }
        }
        return maxSum;
    }
};