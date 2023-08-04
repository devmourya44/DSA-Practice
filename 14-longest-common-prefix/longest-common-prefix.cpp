class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        // loop for first string
        for(int i = 0;i<strs[0].length();i++){
            char ch = strs[0][i];
            bool match = true;
            // compare the character fetched with all the strings
            for(int j = 1;j<strs.size();j++){
                // compare
                if(strs[j].size() < i || ch!=strs[j][i]){
                    match = false;
                    // If not match, hence no need to check further strings
                    break;
                }
            }
            // match false
            if(match == false){
                break;
            }
            else{
                ans.push_back(ch);
            }
        }
        return ans;
    }
};