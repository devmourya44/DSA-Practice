class Solution {
public:
    int beautySum(string S) {
        int N = S.length();
        int totalBeauty = 0;
        
        for (int start = 0; start < N; ++start) {
            unordered_map<char, int> frequencyMap;
            
            for (int end = start; end < N; ++end) {
                frequencyMap[S[end]]++;
                
                int maxFreq = 0, minFreq = INT_MAX;
                for (const auto& kvp : frequencyMap) {
                    maxFreq = max(maxFreq, kvp.second);
                    minFreq = min(minFreq, kvp.second);
                }
                
                totalBeauty += (maxFreq - minFreq);
            }
        }
        
        return totalBeauty;
    }
};