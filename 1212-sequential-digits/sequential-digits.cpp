class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> result;
        int vec[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        int lowLength = to_string(low).length();
        int highLength = to_string(high).length();

        for (int length = lowLength; length <= highLength; ++length) {
            for (int i = 0; i <= 9 - length; ++i) {
                int number = 0;
                for (int j = i; j < i + length; ++j) {
                    number = number * 10 + vec[j];
                }

                if (number >= low && number <= high) {
                    result.push_back(number);
                }
            }
        }

        return result;
    }
};