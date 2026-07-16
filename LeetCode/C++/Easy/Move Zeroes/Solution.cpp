class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size=nums.size();
        for(int i=0;i<size-1;i++){
            for(int j=0;j<size-1;j++){
                if(nums[j]==0){
                    int temp=nums[j+1];
                    nums[j+1]=nums[j];
                    nums[j]=temp;
                }
               
            }
            
                    int temp=nums[i+1];
                    nums[i+1]=nums[i];
                    nums[i]=temp;
                
            
        }
    }
};