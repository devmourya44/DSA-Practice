class Solution {
public:
    string frequencySort(string s) {
      
     vector<pair<int, char>> freq(256, {0, 0});

    for (char c : s) {
        freq[c].first++;
        freq[c].second = c;
    }

    sort(freq.begin(), freq.end(), greater<pair<int, char>>());

    string result = "";
    for (auto& p : freq) {
        result += string(p.first, p.second);
    }

    return result;


    }
};