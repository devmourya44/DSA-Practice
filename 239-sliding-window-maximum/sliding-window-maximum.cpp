class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        deque<int> dq;

        int n = a.size();

        vector<int> res;

        for(int i=0;i<n;i++)

        {

            while(!dq.empty() && dq.front()<(i-k+1))

                dq.pop_front();

            while(!dq.empty() && a[dq.back()]<a[i])

                dq.pop_back();

            dq.push_back(i);

            if(i<k-1)

                continue;

            res.push_back(a[dq.front()]);

        }

        return res;

    }
};