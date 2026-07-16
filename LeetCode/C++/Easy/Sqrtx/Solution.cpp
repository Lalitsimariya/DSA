class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==2||x==0){
            return 1;
        }
        int ans=0;
        for(int i=0;i<x;i++){
            
            if(i*i==x){
                return i;
            }
            else if(i*i>x){
                return i-1;
            }

           
        }
        return 0;
    }
};