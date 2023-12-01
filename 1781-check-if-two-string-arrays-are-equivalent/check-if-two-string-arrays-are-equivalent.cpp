
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a, b;
        
        // Reserve space to avoid frequent reallocations
        for(const auto& x : word1)
            a += x;
        a.reserve(a.size());
        
        for(const auto& x : word2)
            b += x;
        b.reserve(b.size());

        return a == b;
    }
};