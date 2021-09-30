// Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

// Implement the MinStack class:

// MinStack() initializes the stack object.
// void push(int val) pushes the element val onto the stack.
// void pop() removes the element on the top of the stack.
// int top() gets the top element of the stack.
// int getMin() retrieves the minimum element in the stack.
 
class MinStack {
public:
    stack<int> data;
    stack<int> minimum;
    MinStack() {
        
    }
    
    void push(int val) {
        data.push(val);
        if(minimum.empty() || minimum.top() >= val) {
            minimum.push(val);
        }
        
    }
    
    void pop() {
       int d =  data.top();
        data.pop();
        if(minimum.top() == d) {
            minimum.pop();
        }
    }
    
    int top() {
        return data.top();
    }
    
    int getMin() {
        return minimum.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */