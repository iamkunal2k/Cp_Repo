//Problem Link:
// https://www.codingninjas.com/studio/problems/algorithm-to-find-best-insert-position-in-sorted-array_839813?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=0

#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int x)
{
	int n = arr.size();
	int s = 0, e = n - 1;
    int ans = n;

    while (s <= e) {
        int mid = (s + e) / 2;
        // maybe an answer
        if (arr[mid] >= x) {
            ans = mid;
            //look for smaller index on the left
            e = mid - 1;
        }
        else {
            s = mid + 1; // look on the right
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {3, 5, 8, 15, 19};
    int n = 5;
    int ind = searchInsert(arr, n);
    cout << "The Insert position is is the index: " << ind << "\n";
    return 0;
}
