# 463. Island Perimeter
 * Easy
 * You are given row x col grid representing a map where grid[i][j] = 1 represents land and grid[i][j] = 0 represents water.
   Grid cells are connected horizontally/vertically (not diagonally). The grid is completely surrounded by water, and there is exactly one island (i.e., one or more connected land cells).
   The island doesn't have "lakes", meaning the water inside isn't connected to the water around the island. One cell is a square with side length 1. The grid is rectangular, width and height don't exceed 100. Determine the perimeter of the island.
   
 
 ![image](./LongestSubstring.png)
 
此题 可以采用深度优先搜索，DFS算法去解决。
# LeetCode
* 执行耗时: 208ms,在所有 C++ 提交中击败了41.73%的用户 
*  内存消耗: 94.6MB,在所有 C++ 提交中击败了6.82%的用户



* 时间复杂度：![](http://latex.codecogs.com/gif.latex?O(NM)) ，其中 ![](http://latex.codecogs.com/gif.latex?N) 为网格的高度，![](http://latex.codecogs.com/gif.latex?M) 为网格的宽度。每个格子至多会被遍历一次，因此总时间复杂度为 ![](http://latex.codecogs.com/gif.latex?O(NM))
* 空间复杂度：![](http://latex.codecogs.com/gif.latex?O(NM)) ，深度优先搜索复杂度取决于递归的栈空间，而栈空间最坏情况下会达到 ![](http://latex.codecogs.com/gif.latex?O(NM))