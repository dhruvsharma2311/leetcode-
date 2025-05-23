class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;
        while (i < n && s[i] == ' ') {
            i++;
        }

        if (i == n) return 0;

        int sign = 1;
        if (s[i] == '+' || s[i] == '-') {
            if (i + 1 < n && (s[i + 1] == '+' || s[i + 1] == '-')) {
                return 0;
            }
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        long long num = 0;
        while (i < n && isdigit(s[i])) {
            num = num * 10 + (s[i] - '0');

            if (num * sign > INT_MAX) return INT_MAX;
            if (num * sign < INT_MIN) return INT_MIN;

            i++;
        }

        return num * sign;
    }
};