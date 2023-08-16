class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         deque<int>dq;
      vector<int>ans;
      // First window needs to be processed
      for(int i=0;i<k;i++){
          // Remove all the smaller elements
          while(!dq.empty() && nums[i] >= nums[dq.back()]){
              dq.pop_back();
          }
          // insert index so that we can check elements out of window
          dq.push_back(i);
      }
      // Store the answer for first window
      ans.push_back(nums[dq.front()]);
      // Process remaining windows
      for(int i = k;i<nums.size();i++){
          // Remove out of window element
          if(!dq.empty() && i-dq.front() >= k){
              dq.pop_front(); // front element to be removed incase of out of window
          }
          // Remove all the smaller elements for current element
          while(!dq.empty() && nums[i] >= nums[dq.back()]){
              dq.pop_back();
          }
          // Insert the index 
          dq.push_back(i); 
          // Store answer of current window
          ans.push_back(nums[dq.front()]);
      }
      return ans;
    }
};