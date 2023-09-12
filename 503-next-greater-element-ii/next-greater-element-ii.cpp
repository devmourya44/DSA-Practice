class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n, -1);
        stack<int> s;

        for (int i = 0; i < 2 * n; ++i) {
            int current = nums[i % n];
            while (!s.empty() && current > nums[s.top()]) {
                result[s.top()] = current;
                s.pop();
            }
            if (i < n) {
                s.push(i%n);
            }
        }

        return result;
    }
};