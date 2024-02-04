class Solution {
public:
    int majorityElement(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    int maxCount = 1;
    int currentCount = 1;
    int mostFrequentElement = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentElement = nums[i];
        }
    }

    return mostFrequentElement;
    }
};