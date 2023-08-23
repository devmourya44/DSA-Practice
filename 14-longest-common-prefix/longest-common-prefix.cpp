class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        string str;
        for(int i=0; i<arr[0].size(); i++){
             if(arr[0][i]==arr[n-1][i]){
                 str+=arr[0][i];
             }  
             else{
                 break;
             }
        }
        return str==""? "": str;
    
    }
};