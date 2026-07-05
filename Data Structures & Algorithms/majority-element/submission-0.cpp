class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mm;
        for(int i:nums){
            mm[i]++;
        }
        for(auto &pair: mm){
            if(pair.second>(nums.size()/2)){
                return pair.first;
            }
        }
        
    }
};