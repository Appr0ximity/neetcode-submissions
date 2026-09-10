class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> record;
        for(string s: operations){
            if(s == "+"){
                int top = record.back();
                record.pop_back();
                int second = record.back();
                int curr = top+second;
                record.push_back(top);
                record.push_back(curr);
            }else if(s == "C"){
                record.pop_back();
            }else if(s == "D"){
                int top = record.back();
                int curr = top*2;
                record.push_back(curr);
            }else{
                record.push_back(stoi(s));
            }
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};