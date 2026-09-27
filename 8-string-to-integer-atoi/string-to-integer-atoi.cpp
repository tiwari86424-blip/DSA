class Solution {
public:
    void Symbol(int &pos, string &s, string &ans) {
        while (pos < s.size() && s[pos] == '0') {
            pos++;
        }

        while (pos < s.size() &&
               s[pos] >= '0' && s[pos] <= '9') {
            ans += s[pos];
            pos++;
        }
    }

    void first(int &pos, string &s, string &ans) {
        while (pos < s.size() && s[pos] == ' ') {
            pos++;
        }

        if (pos < s.size() &&
            (s[pos] == '+' || s[pos] == '-')) {
            ans += s[pos];
            pos++;
        }

        Symbol(pos, s, ans);
    }

    int myAtoi(string s) {
        int pos = 0;
        string ans;

        first(pos, s, ans);

        if (ans.empty() || ans == "+" || ans == "-")
            return 0;

        long long n = 0;
        int i = 0;
        bool negative = false;

        if (ans[0] == '-') {
            negative = true;
            i = 1;
        } else if (ans[0] == '+') {
            i = 1;
        }

        long long limit = negative
            ? -(long long)INT_MIN
            : INT_MAX;

        for (; i < ans.size(); i++) {
            int digit = ans[i] - '0';

            if (n > (limit - digit) / 10) {
                return negative ? INT_MIN : INT_MAX;
            }

            n = n * 10 + digit;
        }

        return negative ? (int)(-n) : (int)n;
    }
};