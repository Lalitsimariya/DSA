class Solution {
public:
    string removeOuterParentheses(string s) {
        int num=s.length();
        string sh;
        int count=0;
       
        for(int i=0;i<num;i++){
            char c=s[i];
            
            if(c=='('){
                
                if(count>0){
                    
                    sh.push_back(c);
                }
                count++;
                
            }
            else if(c==')'){
                count--;
                if(count>0){
                    sh.push_back(c);
                    
                }
            }
        }
        return sh;

    }
};