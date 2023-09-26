class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }  
        vector<int>v;
        for(auto it:mp){
            v.push_back(it.second);
        }
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1]){
                return false;
            }
        }
        return true;
    }
};