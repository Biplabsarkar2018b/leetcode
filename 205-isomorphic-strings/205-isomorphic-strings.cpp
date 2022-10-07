class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> m;
        unordered_set<char> ss;
       // unordered_map<char,char> ss;
        if(s.size()!=t.size()) return false;
        for(int i=0;i<s.size();i++){
            if(!m.count(s[i])){
                if(!ss.count(t[i])){
                     m[s[i]] = t[i];
                    ss.insert(t[i]);
                }else return false;
               
            }else{
                if(m[s[i]]!=t[i]) return false;
            }
        }
        
        return true;
       
    }
};