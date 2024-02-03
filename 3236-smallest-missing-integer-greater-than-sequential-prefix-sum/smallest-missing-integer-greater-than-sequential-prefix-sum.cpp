class Solution {
public:
    int missingInteger(vector<int>& nums) {
    int x = nums[0];
    nums.push_back(0);
    for (int i = 0; i < nums.size()-1; i++) {
        if (nums[i]!= nums[i + 1]-1) {
            break;
        }
        x+=nums[i+1];
    }
    for (int i = 0; i < nums.size(); i++) {
        if (x == nums[i]) {
            x++;
            i=0;
        }
    }

    return x;
    }
};