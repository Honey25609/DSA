class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> map;
        int sum=0;
        bool flag = false;
        for(int i=0;i<magazine.length();i++) map[magazine[i]]++;
        for(int i=0;i<ransomNote.length();i++){
            if(map[ransomNote[i]]==0) return flag;
            map[ransomNote[i]]--;
        }        
        return true;
    }
};