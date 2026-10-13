class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> sety;
        int l=0;
        int res=0;
        for(int r=0;r<s.length();r++){
            while(sety.contains(s[r])){
                sety.erase(s[l]);
                l+=1;
            }
            sety.insert(s[r]);
            res=max(res,r-l+1);
        }
        return res;
        
    }
};
