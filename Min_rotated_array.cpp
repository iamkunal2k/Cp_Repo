// Problem Link
// https://www.codingninjas.com/studio/problems/rotated-array_1093219?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries&leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
	// Write your code here.
	int ans = INT_MAX;
	int s = 0; 
	int e = arr.size() - 1;
	while(s <= e) {
		int mid = (s+e)/2;
		// if(arr[s] <= arr[mid]) {
		// 	ans = min(arr[s], ans);
		// s = mid + 1;
		if(arr[s] <= arr[e]) {
			ans = min(ans, arr[s]);
			break;
		}
		if (arr[s] <= arr[mid]) {
			ans = min(ans, arr[s]);
			s = mid + 1;
		}
		else {
			e = mid - 1;
			ans = min(arr[mid], ans);
		}
	}
	return ans;
}

int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findMin(arr);
    cout << "The minimum element is: " << ans << "\n";
    return 0;
}