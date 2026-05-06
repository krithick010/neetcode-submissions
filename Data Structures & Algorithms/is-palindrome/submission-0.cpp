class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])) a += tolower(s[i]);
        }
        string rev;
        for(int i=a.size()-1;i>=0;i--){
            rev=rev+a[i];
        }
        if(rev==a){
            return true;
        }
        else{
            return false;
        }
        
    }
};