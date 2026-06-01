class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int currWater;
        int maxWater=0;
        int width;
        while(l<r){
            width=r-l;
            int ht=min(height[l],height[r]);
            currWater=width*ht;
            maxWater=max(maxWater,currWater);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxWater;
    }
};