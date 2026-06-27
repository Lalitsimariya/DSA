class Solution {
    public boolean isPalindrome(int x) {
        
        int rev=0,org=x;
        while(x!=0){
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        System.out.println(rev);
        if(org<0){
            return false;
        }
        else if(org==rev){
            return true;
        }
        else{
            return false;
        }

    }
}