class Solution {
public:
    int majorityElement(vector<int>& nums) {
    vector<int> sortedNums = nums;
    sort(sortedNums.begin(), sortedNums.end());

    int maxCount = 1;
    int currentCount = 1;
    int mostFrequentElement = sortedNums[0];

    for (size_t i = 1; i < sortedNums.size(); ++i) {
        if (sortedNums[i] == sortedNums[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentElement = sortedNums[i];
        }
    }

    return mostFrequentElement;
    }
};