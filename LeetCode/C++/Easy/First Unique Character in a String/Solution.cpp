class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            freq[s[i] - 'a']++;
        }

        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};


//my approach
/*
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>arr;
        int count=0;
        int n = s.length();
        
        for(int j=0;j<n;j++){
            char c=s[j];
            count = c-'a';
            arr.push_back(count);
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

*/