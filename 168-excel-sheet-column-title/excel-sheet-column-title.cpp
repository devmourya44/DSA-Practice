class Solution {
public:
    std::string convertToTitle(int columnNumber) {
        std::string out;
        while (columnNumber > 0) {
            out = char('A' + (columnNumber - 1) % 26) + out;
            columnNumber = (columnNumber - 1) / 26;
        }
        return out;
    }
};