class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
    }
    
    void push(int x) {
        if(s1.empty()) s2.push(x);
        else s1.push(x);
    }
    
    int pop() {
        while(s2.size() != 0){
            s1.push(s2.top());
            s2.pop();
        }
        int res = s1.top();
        s1.pop();
        while(s1.size() != 0){
            s2.push(s1.top());
            s1.pop();
        }
        return res;
    }
    
    int peek() {
        while(s2.size() != 0){
            s1.push(s2.top());
            s2.pop();
        }
        int res = s1.top();
        while(s1.size() != 0){
            s2.push(s1.top());
            s1.pop();
        }
        return res;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
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