class Solution {
public:
    bool isPowerOfThree(int n) {
        bool ans=false;
        int pow=1;
        int num=n,z=0;
        while(num!=1&&num>0){
            num=num/3;
            z++;
        }
        for(int i=0;i<z;i++){
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