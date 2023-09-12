class Solution {
public:
    vector<int> NSL(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsl(n, -1);
        stack<pair<int, int>> s;

        for (int i = 0; i < n; i++) {
            while (!s.empty() && heights[s.top().first] >= heights[i]) {
                s.pop();
            }
            if (!s.empty()) {
                nsl[i] = s.top().second;
            }
            s.push({i, i});
        }

        return nsl;
    }

    vector<int> NSR(vector<int>& heights) {
        int n = heights.size();
        vector<int> nsr(n, n);
        stack<pair<int, int>> s;

        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && heights[s.top().first] >= heights[i]) {
                s.pop();
            }
            if (!s.empty()) {
                nsr[i] = s.top().second;
            }
            s.push({i, i});
        }

        return nsr;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if (n == 1) return heights[0];

        vector<int> nsl = NSL(heights);
        vector<int> nsr = NSR(heights);

        int maxArea = -1;

        for (int i = 0; i < n; i++) {
            maxArea = max(maxArea, (nsr[i] - nsl[i] - 1) * heights[i]);
        }

        return maxArea;
    }
};