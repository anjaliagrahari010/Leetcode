class Solution {
public:
    double myPow(double x, int n) {
        long binF=n;
        if(n<0){
            x=1/x;
            binF= -binF;
        }
        double ans=1;
        while(binF>0){
            if(binF%2==1){
                ans*=x;
            }
            x*=x;
            binF/=2;
        }
        return ans;
    }
};