class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& a) {
        int n = a.size();
        vector <int> answer(n,-1);
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (a[(i + j) % n] > a[i]) {
                    answer[i] = a[(i + j) % n];
                    break;
                }
            }
        }
        return answer;
    }
};