#include<vector>
#include<algorithm>
class MinStack {
public:
    
    vector<int> arr;
    MinStack() {
        
    }
    
    void push(int value) {
        arr.push_back(value);
    }
    
    void pop() {
        int size=arr.size()-1;
        arr.erase(arr.begin()+size);
        
    }
    
    int top() {
        int high=arr.back();
        return high;
    }
    
    int getMin() {
        int small=*min_element(arr.begin(),arr.end());
        
        return small;

    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */