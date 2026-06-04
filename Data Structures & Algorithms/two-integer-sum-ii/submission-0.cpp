class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0;i<numbers.size();i++){
            int check=target-numbers[i];
            for(int j=0;j<numbers.size();j++){
                if(i!=j){
                    if(check==numbers[j]){
                        return {i+1,j+1};
                    }
                }
            }
        }
        return {};
        
    }
};
