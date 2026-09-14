class FreqStack {
private: 
    vector<stack<int>> stvec;
    unordered_map<int, int> mp;
    int maxFreq = 0;
public:
    FreqStack() {
        
    }
    
    void push(int val) {
        mp[val]++;
        if(mp[val] > maxFreq){
            stack<int> temp;
            temp.push(val);
            stvec.push_back(temp);
            maxFreq++;
        }else{
            stvec[mp[val] - 1].push(val);
        }
    }
    
    int pop() {
        int res = stvec[maxFreq - 1].top();
        stvec[maxFreq - 1].pop();
        mp[res]--;
        if(stvec[maxFreq - 1].empty()){
            maxFreq--;
            stvec.pop_back();
        }
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */