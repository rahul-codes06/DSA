class Solution {

private:
int findPosition(vector<int>& nums, int target, bool searchingfirst){
    int s =0;
    int e = nums.size() - 1;
    int ans = -1;
    while(s <= e){
        int mid = s + (e - s) /2;

        if(nums[mid] == target){
            ans = mid;

            if(searchingfirst){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }else if(nums[mid] > target){
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
    return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = findPosition(nums, target, true);
        int lastPos = findPosition(nums, target, false);

        return {firstPos, lastPos};
    }
};