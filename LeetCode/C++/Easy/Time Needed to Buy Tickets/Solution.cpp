class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
    
        int size=tickets.size();
        int start=0,count=0;
        for(int i=size-1;i>=0;i--){
            int c=tickets[start]--;
            if(c==0){
                tickets.erase(tickets.begin());
                count++;
            }
            else{
                tickets.push_back(c);
                count++;
            }
            start++;

        }
        for(int i=size-1;i>=0;i--){
            int c=tickets[start]--;
            if(c==0){
                tickets.erase(tickets.begin());
                count++;
            }
            else{
                tickets.push_back(c);
                count++;
            }
            start++;

        }
        cout<<count;
        return count;
    }
};