class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> count;
        vector<int> ans;
        for(int num:nums){
            count[num]++;
        }
        for(auto& pair:count){
            if(pair.second>(nums.size()/3)){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};