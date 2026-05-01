class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            int check=target-nums[i];
            for(int j=0;j<nums.size();j++){
                if(j==i){
                    continue;
                }
                if(nums[j]==check){
                    return {i,j};
                }
            }
        }
    }
};
