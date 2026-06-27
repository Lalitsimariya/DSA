
class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int[] nums3=new int[nums1.length+nums2.length];
        int pos=0,i,j;
        for(i=0;i<nums1.length;i++){
            nums3[i]=nums1[i];
            pos++;
        }    
        int init=0;
        for(i=pos;i<nums1.length+nums2.length;i++){
            nums3[i]=nums2[init];
            init++;
        }
        for(i=0;i<nums1.length+nums2.length-1;i++){
            for(j=0;j<nums1.length+nums2.length-1;j++){
                if(nums3[j]>nums3[j+1]){
                    int temp=nums3[j];
                    nums3[j]=nums3[j+1];
                    nums3[j+1]=temp;
                }
            }
        }
        System.out.println("merged array: ");
        for(i=0;i<nums3.length;i++){
            System.out.println(nums3[i]);
        }
        float sum=0;
        for(i=0;i<nums3.length;i++){
            sum=sum+nums3[i];
        }
        int len=nums3.length;
        if(len%2==1){
            return nums3[len/2];
        }
        else{
            return (nums3[len / 2 - 1] + nums3[len / 2]) / 2.0; 
        }

    }
    
}