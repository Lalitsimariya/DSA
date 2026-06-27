import java.util.Arrays;
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int y=0;
        for(int i=0;i<m+n;i++){
            if(nums1[i]==0){
                if(y<n){
                    nums1[i]=nums2[y];
                    y++;
                }
            }
            
        }
       
        Arrays.sort(nums1);
        


    }
}