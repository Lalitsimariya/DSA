class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        int sum=0;
        int size=nums.size();
        vector<int> arr;
        for(int i=0;i<size;i++){
            sum=sum+nums[i];
            arr.push_back(sum);
        }
        return arr;
    }
};