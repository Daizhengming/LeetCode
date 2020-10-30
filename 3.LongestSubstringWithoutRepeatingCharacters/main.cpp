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
#include <vector>

using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, 0);         // ASCII码范围：0-127 定义128个正型向量且每个元素的初始值为0
        int ans = 0;
        int i = 0;

        for (int j = 0; j < s.size(); j++){

            i = max(i, m[s[j]]);             // 没有重复字符的时候i取值不变，继续调整右边界
            m[s[j]] = j + 1;                 // 出现重复字符时i应该调整到的新位置，调整左边界
            ans = max(ans, j - i + 1);
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