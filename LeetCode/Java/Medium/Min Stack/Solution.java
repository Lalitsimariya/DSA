import java.util.Arrays;
class MinStack {
    int[] arr=new int[100];
    int topp=-1;
    public MinStack() {
        
    }
    
    public void push(int value) {
        topp++;
        arr[topp]=value;
    }
    
    public void pop() {
        topp--;
    }
    
    public int top() {
        return arr[topp];
    }
    
    public int getMin() {
        int size=arr.length-1;
        int small=arr[topp];
        for(int i=topp;i>=0;i--){
            
            if(arr[i]<=small){
                small=arr[i];
            }
        }
        return small;
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(value);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */