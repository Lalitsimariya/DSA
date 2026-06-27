class Solution {
public:
    bool isValid(string s) {
        int num=s.length(),top=-1;
        char arr[num];
        if(num-1==0){
            return false;
        }
        for(int i=0;i<num;i++){
            char c=s[i];
            if(c=='('){
                top++;
                arr[top]=c;
            }
            else if(c=='['){
                top++;
                arr[top]=c;
            }
            else if(c=='{'){
                top++;
                arr[top]=c;
            }
            else if(c==')'){
                if(top==-1){
                    return false;
                }
                else if(arr[top]=='('){
                    top--;
                }
                else {
                    return false;
                }

            }
            else if(c==']'){
                if(top==-1){
                    return false;
                }
                else if(arr[top]=='['){
                    top--;
                }
                else {
                    return false;
                }

            }
            else if(c=='}'){
                if(top==-1){
                    return false;
                }
                else if(arr[top]=='{'){
                    top--;
                }
                else {
                    return false;
                }

            }

        }
        for(int i=0;i<num;i++){
            cout<<arr[i];
        }
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }
};