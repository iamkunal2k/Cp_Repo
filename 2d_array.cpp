#include <bits/stdc++.h>
using namespace std;

int largestRowSum(int arr[][3], int i, int j) {

	int maxi = INT_MIN;
	int rowIndex = -1;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			/* code */
			sum += arr[i][j];

		}
        
        cout<< "Sum : "<<i<<" : "<<sum<< endl;
		if(sum > maxi) {
			sum = maxi;
			rowIndex = i;
		}
	}
	


	return rowIndex;

}


int main() {
	
	int arr[3][3];


	for (int i = 0; i < 3; i++)
	{
		/* code */
		for(int j = 0; j < 3; j++) {
			cin>>arr[i][j];

		}
	}
	
	cout << "Printing the array " << endl;
    //print 
    for(int row=0; row<3; row++) {
        for(int col=0; col<3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

	int ans = largestRowSum(arr, 3, 3);
	cout<< ans << endl;

	return 0;
}