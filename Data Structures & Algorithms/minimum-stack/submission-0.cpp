class MinStack {
private:
    stack<int> ms;
    stack<int> s;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(!ms.empty()){
            if(ms.top() >= val) ms.push(val);
        }else{
            ms.push(val);
        }
        s.push(val);
    }
    
    void pop() {
        if(s.top() == ms.top()) ms.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
