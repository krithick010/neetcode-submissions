class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            int number=nums[i];
        for(int j=0;j<nums.size();j++){
            if(nums[j]==number){
                count=count+1;
            }
        }
        if(count>1){
            return true;
            return 0;
        }
        else{
            count=0;
            continue;
        }
        }
        return false;

        
    }
};