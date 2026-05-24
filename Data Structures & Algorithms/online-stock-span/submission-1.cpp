class StockSpanner {
public:
  vector<int> vec;
    StockSpanner() {
       
    }
    
    int next(int price) {
        int count=1;
    if(vec.empty()){ vec.push_back(price);}
    else{
        for(int i = vec.size()-1;i>=0;i--){
            if(price>=vec[i]){
                count++;
            }
            else{
                break;
            }
        }
        vec.push_back(price);
    }
     return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */