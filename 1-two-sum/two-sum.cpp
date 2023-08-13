class Solution {
public:
    static bool cmp(pair<int,int>a,pair<int,int>b){
        return a.first < b.first;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
//Initialize the vector of pair which store the value and its index
        vector<pair<int,int>>ans;
        vector<int>answer;
      for(int i=0;i<nums.size();i++){
          int val =nums[i];
          int index=i;
          ans.push_back({val,i});
      }
 //Sort the ans with cmp
      sort(ans.begin(),ans.end(),cmp);
// two pointer approach to find target sum;
   int start=0;
   int end=ans.size() - 1;
  while(start<end){
//target is equal to sum then push back index of start and end;
    if(ans[start].first+ans[end].first==target){
    answer.push_back(ans[start].second);
    answer.push_back(ans[end].second);
    break;
    }
    else if(ans[start].first + ans[end].first > target){
    end--;
    }
    else{
    start++;
    }
}

    return answer; 
    }
};