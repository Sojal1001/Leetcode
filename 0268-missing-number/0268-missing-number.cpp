class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = 0;
        while (x <= nums.size()) {
            bool flag = false;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                return x;
            }
            x++;
        }
        return -1; 
    }
};
