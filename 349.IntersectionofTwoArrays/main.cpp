/***
 *
 * 349.IntersectionofTwoArrays
 *
 * Easy
 *
 * Given two arrays, write a function to compute their intersection.
 *
 * Each element in the result must be unique.
 * The result can be in any order.
 * By ZhengMing.Dai
 *
 */

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int length1 = nums1.size(), length2 = nums2.size();
        int index1 = 0, index2 = 0;
        vector<int> intersection;
        while (index1 < length1 && index2 < length2) {
            int num1 = nums1[index1], num2 = nums2[index2];
            if (num1 == num2) {
                if (!intersection.size() || num1 != intersection.back()) {
                    intersection.push_back(num1);
                }
                index1++;
                index2++;
            } else if (num1 < num2) {
                index1++;
            } else {
                index2++;
            }
        }
        return intersection;
    }
};

int main(){
    Solution Intersection;
    vector<int> nums1 = {4,9,5};
    vector<int> nums2 = {9,4,9,8,4};
    for(auto num: Intersection.intersection(nums1, nums2)) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}