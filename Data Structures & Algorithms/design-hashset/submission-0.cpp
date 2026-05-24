class MyHashSet {
public:
vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
         int flag =0;
    for(auto i:v){
        if(key!=i){
            flag=0;
        }
        else{
            flag=1;
            break;
        }

    }
    if(flag==0)v.push_back(key);
    }
    
    void remove(int key) {
         auto i=find(v.begin(),v.end(),key);
        
        if(i!=v.end()){
            v.erase(i);
        }
    }
    
    bool contains(int key) {
         int flag=0;
        for(auto i:v){
            if(key==i){
                flag=1;
                break;
            }
            else{
                flag=0;
            }
        }
        if(flag==1){
            
            return true;}
        else{return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */