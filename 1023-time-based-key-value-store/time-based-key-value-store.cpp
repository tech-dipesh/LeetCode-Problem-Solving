class TimeMap {
public:
 map<string, vector<pair<int, string>> >mp;
    TimeMap() {
        // unordered_map<int, int>mp;
    }
    
    void set(string key, string value, int timestamp) {
         mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        // Binary SEarch:
        
        int left = 0, right = mp[key].size()-1, index = -99;
        while (left <= right) {
           int medium = left + (right - left) / 2;
            if (mp[key][medium].first <= timestamp) index = medium;
            if (mp[key][medium].first < timestamp) {
                left = medium+1;
            } else {
                right = medium-1;
            }
        }
        return index==-99? "":mp[key][index].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */