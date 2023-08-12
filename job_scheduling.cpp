#include<bits/stdc++.h>
using namespace std;

struct job_scheduling
{
	char id;
	int deadline;
	int profit;	
};

// function for sorting all jobs according to profit

bool compare(job_scheduling a, job_scheduling b) {
	return(a.profit > b.profit);
}

jobScheduler(int arr[], int n) {

	//sort all the jobs according to decreasing order of profit

	sort(arr, arr + n, compare);

	int result[n];		// to sort result
	bool slot[n];

	//	Initialize all slots to be free
	for(int i = 0; i < n; i++) {
		slot[i] = false; 
	}

	for (int i=0; i<n; i++) 
  { 
  // Find a free slot for this job (Note that we start 
  // from the last possible slot) 
  for (int j=min(n, arr[i].dead)-1; j>=0; j--) 
  { 
    // Free slot found 
    if (slot[j]==false) 
    { 
      result[j] = i; // Add this job to result 
      slot[j] = true; // Make this slot occupied 
      break; 
    } 
  } 
  } 
  // Print the result 
  for (int i=0; i<n; i++) 
  if (slot[i]) 
    cout << arr[result[i]].id << " "; 

}

int main() {

	job_scheduling arr[] = { {'a', 2, 20}, {'b', 2, 15}, {'c', 1, 10}, 
        {'d', 3, 5}, {'e', 3, 1}}; 

    int n;
    cout<<"Maximum profit Sequence of the job is : ";

    jobScheduler(arr, n);
}