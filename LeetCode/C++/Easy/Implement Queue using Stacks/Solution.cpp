class MyQueue {
public:
    int front=0,rear=-1,top=-1;
    int arr1[100];
    int arr2[100];
    MyQueue() {
        
    }
    
    void push(int x) {
        //stack
        ++top;
        arr1[top]=x;
        //queue
        ++rear;
        arr2[rear]=x;


    }
    
    int pop() {
        //stack
        int a=arr1[top];
        --top;
        
        //queue
        int b=arr2[front];
        ++front;
        return b;

    }
    
    int peek() {
        return arr1[front];
    }
    
    bool empty() {
        if(top==-1 || rear==-1){
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