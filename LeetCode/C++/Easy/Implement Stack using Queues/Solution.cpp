class MyStack {
public:
    int rear=-1;
    int arr[6];
    MyStack() {
        
    }
    
    void push(int x) {
        ++rear;
        if(rear)
        arr[rear]=x;


    }
    
    int pop() {
        int c=arr[rear];
        --rear;
        return c;

    }
    
    int top() {
        return arr[rear];
    }
    
    bool empty() {
        if(rear==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */