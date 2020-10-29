# 3. Longest Substring Without Repeating Characters
 * Medium
 * Given a string s, find the length of the longest substring without repeating characters.
 
 本题采用滑动窗口的思想、具体算法过程如下所示
 
 ![image](./LongestSubstring.png)
 
 在滑动的过程中，我们可以创建一个字符向量用于标记左边界更新位置的标记。
 #LeetCode
* 执行耗时: 8ms,在所有 C++ 提交中击败了98.36%的用户 
*  内存消耗: 8MB,在所有 C++ 提交中击败了67.24%的用户



* 时间复杂度：![](http://latex.codecogs.com/gif.latex?O(N)) ，其中 ![](http://latex.codecogs.com/gif.latex?N) 是字符串的长度。左指针和右指针分别会遍历整个字符串一次。
* 空间复杂度：![](http://latex.codecogs.com/gif.latex?O(|\Sigma|)) ，其中 ![](http://latex.codecogs.com/gif.latex?\Sigma) 表示字符集（即字符串中可以出现的字符），![](http://latex.codecogs.com/gif.latex?\|\Sigma|) 表示字符集的大小。
在本题中没有明确说明字符集，因此可以默认为所有 ASCII 码在[0, 128)内的字符，
即 ![](http://latex.codecogs.com/gif.latex?|\Sigma|=128) 。我们需要用到哈希集合来存储出现过的字符，而字符最多有 ![](http://latex.codecogs.com/gif.latex?|\Sigma|) 个
因此空间复杂度为 ![](http://latex.codecogs.com/gif.latex?O(|\Sigma|)) 。
 