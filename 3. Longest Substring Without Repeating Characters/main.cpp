/***
 *
 * 3. Longest Substring Without Repeating Characters
 *
 * Medium
 *
 * Given a string s, find the length of the longest substring without repeating characters.
 *
 * By ZhengMing.Dai
 *
 */

#include <iostream>
#include <unordered_set>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> occ;                 // 哈希集合，记录每个字符是否出现过
        int n = s.size();                        // 右指针，初始值为 -1，相当于我们在字符串的左边界的左侧，还没有开始移动
        int rk = -1, ans = 0;                    // 枚举左指针的位置，初始值隐性地表示为 -1

        for (int i = 0; i < n; ++i) {
            if (i != 0) {
                occ.erase(s[i - 1]);          // 左指针向右移动一格，移除一个字符
            }
            while (rk + 1 < n && !occ.count(s[rk + 1])) {
                occ.insert(s[rk + 1]);        // 不断地移动右指针
                ++rk;
            }
            ans = max(ans, rk - i + 1);          // 第 i 到 rk 个字符是一个极长的无重复字符子串
        }
        return ans;
    }
};

int main() {
    Solution LengthOfLongestSubstring;
    string chars = "abcabcbb";
    cout << "\"abcabcbb\" the longest substring: " << LengthOfLongestSubstring.lengthOfLongestSubstring(chars) << endl;
    cout << "Explanation: The answer is \"abc\", with the length of 3." << endl;
    chars = "bbbbb";
    cout << "\"bbbbb\" the longest substring: " << LengthOfLongestSubstring.lengthOfLongestSubstring(chars) << endl;
    cout << "Explanation: The answer is \"b\", with the length of 1." << endl;
    return 0;
}