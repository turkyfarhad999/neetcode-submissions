class MyHashMap {
public:
  map<int,int> m;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        m[key]=value;
    }
    
    int get(int key) {
        int flag=0;
        int p;
        
        for(auto i:m){
            if(key==i.first){
                p=i.second;
                flag=1;
                break;
            }
            else{
                flag=0;
            }
            
        }
        if(flag==1){
            return p;
        }
        else{
            return -1;
        }
        
    }
    
    void remove(int key) {
        m.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */