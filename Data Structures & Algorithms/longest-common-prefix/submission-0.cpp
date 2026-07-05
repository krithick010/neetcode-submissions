class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        string check=strs[0];
        bool yes=true;
        for(int i=0;i<check.size();i++){
            for(int j=0;j<strs.size();j++){
                if(check[i]!=strs[j][i]){
                    yes=false;
                }
            }
            if(yes==true){
                ans=ans.append(check,i,1);
            }
            else{
                break;
            }
        }
        return ans;
        
    }
};