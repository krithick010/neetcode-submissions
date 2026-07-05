class MyHashMap {
private: unordered_map<int,int> main;
public:
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        main[key]=value;
    }
    
    int get(int key) {
        auto it=main.find(key);
        if(it==main.end()){
            return -1;
        }
        return it->second;
    }
    
    void remove(int key) {
        main.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */