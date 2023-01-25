//Lecture 14
//codestudio

//https://www.codingninjas.com/codestudio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1



long long int binarySearch(int n) {

    int s = 0;
    int e = n;
    
    //we are using long long int since if mid value can exceed the limit if it gets more thn 2^31 (code will result in overflow for big values)

    long long int ans = -1;
    long long int mid = s + (e-s)/2;
    
    while ( s<=e ) {
        long long int square = mid*mid;
        if (square == n) {
            return mid ;
        }
        
        //less than condition

        if (square < n) {
            ans = mid;
            s = mid + 1;
        }
        
        //greater than condition

        else {
            e = mid - 1;
        }
        
        mid = s + (e-s)/2;
    }
    return ans;
}


int sqrtN(long long int N)
{
    return binarySearch(N);
}