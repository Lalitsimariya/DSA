class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0,len=s.length()-1;
        for(int i=len;i>=0;i--){
            if(s[i]==' '){
                continue;
            }
            else{
                for(int j=i;i>=0&&s[i]!=' ';j--){
                    count++;
                    i--;
                }
                break;
            }
        }
        return count;
    }
};