class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> map1;
        unordered_map<char,char> map2;
        bool flag = false;
        if(s.length()!=t.length()) return flag;
        for(int i=0;i<s.length();i++) map1[s[i]]=t[i];
        for(int i=0;i<s.length();i++) map2[t[i]]=s[i];
        for(int i=0;i<s.length();i++){
            if(map1[s[i]]!=t[i] || map2[t[i]]!=s[i]){
                return flag;
            }
        }
        return true;
    }
};