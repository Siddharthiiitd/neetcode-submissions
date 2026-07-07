class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> map;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        map[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        string recent = "";
        for(auto [time,val] : map[key]){
            if(time < timestamp){
                recent= val;
            }
            else if (time == timestamp){
                return val;
            }
        }
        return recent;
    }
};
