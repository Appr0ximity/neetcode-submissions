class StockSpanner {
private:
    stack<pair<int, int>> s;
    int count = 0;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        if(s.empty() || s.top().first > price){
            s.push({price, ++count});
            return 1;
        }else{
            while(!s.empty() && s.top().first <= price){
                s.pop();
            }
            if(s.empty()) {
                s.push({price, ++count});
                return count;
            }
            int res = ++count - s.top().second;
            s.push({price, count});
            return res;
        }
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */