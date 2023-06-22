// Problem Link:
// https://www.codingninjas.com/codestudio/problems/binary-search_972?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1

include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &nums,int low, int high, int target) {
    // Write Your Code Here
    if (low > high) return -1;
    int mid = (low+high)/2;
    if (nums[mid]==target) return mid;
    else if (target > nums[mid]) return binarySearch(nums, mid+1, high, target);
    else return binarySearch(nums, low, mid-1, target);
}

int search(vector<int>& nums, int target) {
    // Write Your Code Here
    return binarySearch(nums, 0, nums.size()-1, target);
}
