class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        map<char,int>mp;
        for(int i=0;i<s.length(); i++){
            mp[s[i]]++;
        }
        for(auto it: mp){
            pq.push({it.second, it.first});
        }
        string ans = "";
        while(!pq.empty()){
            for(int j=0;j<pq.top().first;j++){
                ans += pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};