class MyQueue {
public:
    int front=0,rear=-1;
    int arr[100];
    MyQueue() {
        
    }
    
    void push(int x) {
        rear++;
        arr[rear]=x;
    }
    
    int pop() {
        int c=arr[front];
        if(front>=0){
            front++;
        }
        return  c;
        
        
    }
    
    int peek() {
        if(rear>0){
            return arr[front];
        }
        else{
            return 0;
        }
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
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */