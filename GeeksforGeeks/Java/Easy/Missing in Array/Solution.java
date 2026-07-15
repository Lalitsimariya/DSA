#include<vector>
#include<algorithm>
class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int size=arr.size();
        int find=1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<size;i++){
            if(arr[i]==find){
                find++;
            }
            
        }
        return find;
    }
};