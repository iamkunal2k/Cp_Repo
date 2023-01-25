// CODESTUDIO

//https://www.codingninjas.com/codestudio/problems/search-in-rotated-sorted-array_1082554

int callPivot( vector<int>& arr, int n) {
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while (s<e) {
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
}

int BinarySearch(vector<int>& arr,int s, int e, int key) {
    
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while( start <= end ) {
        
        //Base Condition    

        if (arr[mid] == key) {
            return mid;
        }

        // Right Part 

        if (key > arr[mid]) {
            start = mid + 1;
        }

        // Left Part

        else {
            end = mid - 1;
        }

        //Initializing mid position

        mid = start + (end-start)/2;
    }

    return - 1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = callPivot(arr, n);
    
    //Second Line

    if (k >= arr[pivot] && k <=arr[n-1] ) {
        return BinarySearch(arr, pivot, n-1, k);
    }
    
    //first Line
    
    else {
        return BinarySearch(arr, 0, pivot-1, k);
    }
}

