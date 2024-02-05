class Solution {
public:
    int firstUniqChar(string s) {
        int x = s.length();
        int arr[256];
        for(int i=0;i<x;i++) arr[int(s[i])]+=1;
        for(int i=0;i<x;i++){
            if(arr[int(s[i])]==1) return i;
        }
        return -1;
    }
};