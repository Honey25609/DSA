class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,int> map;
        int sum=0;
        bool flag = false;
        if(s.length()!=t.length())return flag;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(map[t[i]]!=0) map[t[i]]--;
        }
        for(auto i:map)sum+=i.second;
        
        if(sum==0) return true;
        return flag;
    }
};