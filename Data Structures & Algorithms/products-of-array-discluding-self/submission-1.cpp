class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results;
        int a=1;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                a=a*nums[j];
                }
            }
            results.push_back(a);
            a=1;
        }
    return results;
    }
};
