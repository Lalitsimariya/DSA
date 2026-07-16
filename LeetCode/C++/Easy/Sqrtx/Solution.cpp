class Solution {
public:
    int mySqrt(int x) {
        if(x==1||x==2){
            return 1;
        }
        else if(x==0){
            return 0;
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