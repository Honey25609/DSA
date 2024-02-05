class Solution {
public:
    int romanToInt(string s) {
        int val=0;
        for(int i=0;i<s.length();i++){
           if(s[i]=='I') val+=1;
           else if(s[i]=='V') val+=5;
           else if(s[i]=='X') val+=10;
           else if(s[i]=='L') val+=50;
           else if(s[i]=='C') val+=100;
           else if(s[i]=='D') val+=500;
           else if(s[i]=='M') val+=1000;
        }
        for(int i=0;i<s.length();i++){
           if(s.substr(i,i+2)=="IV" ||s.substr(i,2)=="IX") val-=2;
           else if(s.substr(i,2)=="XL" || s.substr(i,2)=="XC") val-=20;
           else if(s.substr(i,2)=="CD" || s.substr(i,2)=="CM") val-=200;
        }
        return val;
    }
};