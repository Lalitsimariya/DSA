class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>arr(s.length());
        int count=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            for(int j=0;j<s.length();j++){
                if(c==s[j]){
                    count++;
                }
            
            }
            arr[i]=count;
            if(arr[i]==1){
                return i;
            }
            else{
                count=0;
            }
            
        }

        
        return -1;
        
    }
};