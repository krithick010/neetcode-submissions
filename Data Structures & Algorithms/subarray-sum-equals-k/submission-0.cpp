class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int check=0;
            for(int j=i;j<nums.size();j++){
                check=check+nums[j];
                if(check==k) count++;
            }
        }
        return count;
        
    }
};