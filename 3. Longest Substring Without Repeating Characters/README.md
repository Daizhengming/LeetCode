# 3. Longest Substring Without Repeating Characters
 * Medium
 * Given a string s, find the length of the longest substring without repeating characters.
 
 本题采用滑动窗口的思想、具体算法过程如下所示
 
 ![image](./LongestSubstring.png)
 
 在滑动的过程中，我们可以创建一个字符向量用于标记左边界更新位置的标记。