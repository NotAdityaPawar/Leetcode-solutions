class MyQueue {
public:
    int front;
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        if (s1.empty())
            front = x;
        
        while(s1.empty()==false){
            s2.push(s1.top());
            s1.pop();
        }
        s2.push(x);
        while (s2.empty()==false){
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    
    int pop() {
        int res = s1.top();
        if (!s1.empty())
            front = s1.top();
        s1.pop();
        return res;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        return s1.empty();
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