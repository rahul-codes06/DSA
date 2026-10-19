class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smallerNum = 0;
        int targetNum = 0;

        for(int num : nums){
            if(num < target){
                smallerNum++;
            }else if(num == target){
                targetNum++;
            }
        }

        vector<int> result;
        for(int i = 0; i < targetNum; i++){
            result.push_back(smallerNum + i);
        }
        return result;
    }
};