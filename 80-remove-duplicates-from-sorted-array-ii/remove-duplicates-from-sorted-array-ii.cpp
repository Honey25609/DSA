class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()>2){
            for(int i=0;i<nums.size()-2;){
                if(nums[i]==nums[i+2]){
                    nums.erase(nums.begin()+i);
                }else i++;
            }
        }
        return nums.size();
    }
};