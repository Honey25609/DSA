class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> vec2;
        int vec[9] = {1,2,3,4,5,6,7,8,9};
        int x = to_string(low).length();
        int y = to_string(high).length();


        for (int i = x-1; i < y; i++) {
            for (int j = 0; j < 9-i; j++) {
                int a = i;
                long long b = 0;
                int b2 = j;
                while (a > -1 && b2 < 9) {
                    b += vec[b2] * pow(10, a);
                    b2++;
                    a--;
                }
                a=i;

            if (b > low-1 && b < high+1) {
                vec2.push_back(b);
            }
        }
    }   

    return vec2;
    }
};