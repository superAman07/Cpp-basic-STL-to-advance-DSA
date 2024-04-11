class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.length();
        if (n == k) {
            return "0";
        }
        std::string result;
        for (char digit : num) {
            while (k > 0 && !result.empty() && result.back() > digit) {
                result.pop_back();
                k--;
            }
            result.push_back(digit);
        }
        result.resize(result.size() - k);  
        size_t pos = result.find_first_not_of('0');
        if (pos != std::string::npos) {
            return result.substr(pos);
        }
        return "0";
    }
};
