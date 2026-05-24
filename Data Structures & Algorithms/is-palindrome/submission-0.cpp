class Solution {
public:
    bool isPalindrome(string s) {
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        string final;
        for( auto i : s){
            if(i>='a'&&i<='z'||i>='A'&&i<='Z'||i>='0'&&i<='9'){
                final+=i;
            }
        }
        
        string ss=final;
        transform(final.begin(),final.end(),final.begin(),::tolower);
        transform(ss.begin(),ss.end(),ss.begin(),::tolower);
        reverse(final.begin(),final.end());
         
        if(ss==final){
            

            return true;
           
        }
        else{
           
            return false;
            
        }
        
    }
};