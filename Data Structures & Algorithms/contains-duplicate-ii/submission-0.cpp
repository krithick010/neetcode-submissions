class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        bool check=false;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]&&abs(i-j)<=k){
                    check=true;
                }
            }
        }
        return check;
        
    }
};