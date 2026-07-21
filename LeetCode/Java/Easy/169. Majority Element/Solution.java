 import java.util.Arrays;
class Solution {
    public int majorityElement(int[] nums) {
        Arrays.sort(nums);
        int len=nums.length/2;
        

        return nums[len];
    }
}