class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ans=false;
        int pow=1;
        for(int i=0;i<3;i++){
            pow=pow*3;
        }
        cout<<pow;
        if(pow==n){
            ans=true;
            return ans;
        }
        return ans;
    }
};