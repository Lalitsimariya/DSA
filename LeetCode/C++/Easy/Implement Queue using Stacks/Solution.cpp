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
        
            front++;
            rear--;
        }
        
        
        return  c;
        
        
    }
    
    int peek() {
       
        return arr[front];
        
    }
    
    bool empty() {
        if(rear==-1){
            return true;
        }
       return false;

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