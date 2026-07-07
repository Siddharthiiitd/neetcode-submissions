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
        vector<pair<int,string>> values = map[key];
        int l=0;
        int r = values.size()-1;
        while(l<=r){
            int mid = l + (r-l)/2;
            if(values[mid].first <= timestamp){
                recent = values[mid].second;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return recent;
    }
};
