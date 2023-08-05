// problem link :
// https://www.codingninjas.com/studio/problems/631055?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=1

// Approch 1
/*

#include <bits/stdc++.h> 
void sort012(int *arr, int n) {
    
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;

    for( int i = 0; i < n; i++) {
        
        if ( arr[i] == 0) count0++;
        else if ( arr[i] == 1 ) count1++;
        else count2++;
    }

    for( int i = 0; i < count0; i++) arr[i] = 0;
    for( int i = count0; i < count0 + count1; i++) arr[i] = 1;
    for( int i = count0 + count1; i < n; i++) arr[i] = 2;

}
*/

// Optimal Approach

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int s = 0, mid = 0, e = nums.size() - 1;

        while(mid <= e) {

            if(nums[mid] == 0) {
                swap(nums[s], nums[mid]);
                s++;
                mid++;
            }

            else if(nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[e]);
                e--;
            }
        }
    }
};