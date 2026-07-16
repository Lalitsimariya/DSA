#include<algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        bool ans=false;
        for(int i=0;i<size&&i+1<size;i++){
            if(nums[i]==nums[i+1]){
                ans=true;
                return ans;
            }
        }
        return ans;
    }
};