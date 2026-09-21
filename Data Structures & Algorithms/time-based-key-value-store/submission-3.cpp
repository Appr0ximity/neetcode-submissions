class TimeMap {
private:
    unordered_map<string, vector<pair<int, string>>> mp;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto it = mp.find(key);
        if (it == mp.end()) return "";
        auto& vec = it->second;
        int i = 0, j = vec.size() - 1, mid;

        while(i<=j){
            mid = i+(j-i)/2;
            if(vec[mid].first < timestamp){
                i = mid + 1;
            }else if(vec[mid].first > timestamp){
                j = mid - 1;
            }else{
                return vec[mid].second;
            }
        }
        if(i == 0){
            return "";
        }else return vec[i-1].second;
    }
};
