class Solution {
public:
    bool wordPattern(string pattern, string s) {
        string x,z;
        int y=0;
        bool flag = false;
        unordered_map<char,string> map;
        if(s.length()==1) return true;
        for(int i=0;i<s.length();i++){
            if(i==s.length()-1){
                x+=s[i];
                map[pattern[y]]=x;
            }
            else if(s[i]!=' '){
                x+=s[i];
            }
            else{
                map[pattern[y]]=x;
                y++;
                x= "";
            }
        }
        for(int i=1;i<pattern.length();i++){
            if(map[pattern[i]]==map[pattern[i-1]] && pattern[i]!=pattern[i-1]) return flag;
        }
        for(int i=0;i<pattern.length()-1;i++){
            for(int j=1;j<pattern.length();j++){
                if(map[pattern[i]]==map[pattern[j]] && pattern[i]!=pattern[j]) return flag;
            }
        }
        z=map[pattern[0]];

        for(int i=1;i<pattern.length();i++){
            z+=" "+map[pattern[i]];
        }
        if(z==s) return true;
        return flag;
    }
};