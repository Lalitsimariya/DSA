#include<vector>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size()-1;
        for(int i=0;i<k;i++){
            nums.insert(nums.begin(),nums[size]);
        }
        nums.resize(nums.size()-k);
    }
};