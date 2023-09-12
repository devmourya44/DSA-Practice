//BRUTE FORCE- GIVES TLE

//     int largestRectangleArea(vector<int>& arr) {

//         int left;
//         int right;
//         int n = arr.size();
//         int area = 0;

//         for(int i =0;i<n; i++){
//             left = right = i;

//             while(left >= 0 && arr[left] >= arr[i]){
//             left--;
//             }

//             while(right < n && arr[right] >= arr[i]){
//             right++;
//             }

//             int width = right- left -1;

//             area = max(area, width * arr[i]);

//         }

//         return area;


//     }

// };

//OPTIMISED

// class Solution {
// public:
//     vector<int> NSL(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> nsl(n, -1);
//         stack<pair<int, int>> s;

//         for (int i = 0; i < n; i++) {
//             while (!s.empty() && heights[s.top().first] >= heights[i]) {
//                 s.pop();
//             }
//             if (!s.empty()) {
//                 nsl[i] = s.top().second;
//             }
//             s.push({i, i});
//         }

//         return nsl;
//     }

//     vector<int> NSR(vector<int>& heights) {
//         int n = heights.size();
//         vector<int> nsr(n, n);
//         stack<pair<int, int>> s;

//         for (int i = n - 1; i >= 0; i--) {
//             while (!s.empty() && heights[s.top().first] >= heights[i]) {
//                 s.pop();
//             }
//             if (!s.empty()) {
//                 nsr[i] = s.top().second;
//             }
//             s.push({i, i});
//         }
        
//         return nsr;
//     }

//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         if (n == 1) return heights[0];

//         vector<int> nsl = NSL(heights);
//         vector<int> nsr = NSR(heights);

//         int maxArea = -1;

//         for (int i = 0; i < n; i++) {
//             maxArea = max(maxArea, (nsr[i] - nsl[i] - 1) * heights[i]);
//         }

//         return maxArea;
//     }
// };

//OPTIMISED TO SINGLE PASS

class Solution {
  public:
    int largestRectangleArea(vector < int > & heights) {
      stack < int > st;
      int maxA = 0;
      int n = heights.size();
      for (int i = 0; i <= n; i++) {
        while (!st.empty() && (i == n || heights[st.top()] >= heights[i])) {
          int height = heights[st.top()];
          st.pop();
          int width;
          if (st.empty())
            width = i;
          else
            width = i - st.top() - 1;
          maxA = max(maxA, width * height);
        }
        st.push(i);
      }
      return maxA;
    }
};