class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>arr;
        int count=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            char c=s[i];
            for(int j=0;j<n;j++){
                if(c==s[j]){
                    count++;
                }
            
            }
            arr.push_back(count);
            count=0;
            
        }
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" "<<i;
            if(arr[i]==1){
                return i;
            }
            
        }
        
        return -1;
        
    }
};