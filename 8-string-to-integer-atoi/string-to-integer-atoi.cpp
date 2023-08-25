class Solution {
public:
    int myAtoi(string str) {
         int result = 0;
        int i = 0;
        int sign = 1;

        while (str[i] == ' ')
            i++;

        if (str[i] == '+' || str[i] == '-') {
            sign = (str[i++] == '-') ? -1 : 1;
        }

        while (isdigit(str[i])) {
            int digit = str[i] - '0';

            // Check for overflow before updating result
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > INT_MAX % 10)) {
                return (sign == -1) ? INT_MIN : INT_MAX;
            }

            result = result * 10 + digit;
            i++;
        }

        return sign * result;
    }

};