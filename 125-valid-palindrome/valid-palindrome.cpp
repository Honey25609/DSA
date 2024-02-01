class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(int i=0;i<s.size();i++){

            if(int(s[i])>64&&int(s[i])<91){
                x+=s[i]+32;
            }
            else if((int(s[i])>96&&int(s[i])<123)||int(s[i])>47&&int(s[i])<58){
                x+=s[i];
            }
        }
        int low=0,high= x.size()-1;
        bool flag = false;
        while(low<=high){
            if(x[low]!=x[high]) return flag;
            low++;
            high--;
        }
        return true;
        
    }
};