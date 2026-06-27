class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len=nums.size();
        int count=0;
        for(int i=0;i<len;i++){
            if(nums[i]==val){
                nums[i]=0;
                count--;
            }
            count++;
        }
        for(int i=0;i<len-1;i++){
            for(int j=0;j<len-1;j++){
                if(nums[j]<nums[j+1]){
                    int temp=nums[j];
                    nums[j]=nums[j+1];
                    nums[j+1]=temp;
                }
            }
        }
        for(int i=0;i<len;i++){
            cout<<nums[i];
        }
        return count;     
    }
};