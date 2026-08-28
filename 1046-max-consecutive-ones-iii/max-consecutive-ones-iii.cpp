class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen=0, len=0, r=0, l=0;
        int countZeroes = 0;
        while(r<nums.size()){
            if(nums[r]==0){
                countZeroes++;
            }
            while(countZeroes>k){
                if(nums[l]==0){
                    countZeroes--;
                    
                }
                l++;
                

            }
             len = r - l + 1;
            maxlen = max(len, maxlen);
            r++;
        }
        return maxlen;
    }
};