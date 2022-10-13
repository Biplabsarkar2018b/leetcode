class Solution {
public:
    bool matched(string haystack,int start,int last,string needle){
        int i = 0;
        int j = start;
        for(;j<last;j++){
            if(haystack[j]!=needle[i]) return false;
            i++;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        int size = needle.size()-1;
        for(int i=0;i<haystack.size();i++){
            int start = 0;
            //if the first element matches-----
            if(haystack[i]==needle[start]){
                //if the last element matches------
                if((i+size)<haystack.size() && haystack[i+size]==needle[size]){
                    bool res = matched(haystack,i,i+size,needle);
                    if(res) return i;
                }
            }
        }
        
        return -1;
    }
};