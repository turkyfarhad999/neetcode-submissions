class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.size();
        int len2=word2.size();
        int l=max(len1,len2);
        string final;
        for( int i =0;i<l;i++){
              
              
             
               if(i<len1){
 final+=word1[i];
               }
               if(i<len2){
                  final+=word2[i];
               }
        }
        return final;
    }
};