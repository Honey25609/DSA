class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int max = 1;
    int count = 1;
    int most = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        if (count > max) {
            max = count;
            most = nums[i];
        }
    }

    return most;
    }
};