#include <iostream>
using namespace std;

int binsea(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;

    while(start<=end){
        if( arr[mid]==key){
            return mid;
        }
        //going to the left
        if (key<arr[mid]){
            end=mid-1;
        }
        // going to the right
        else{
            start=mid+1;
        }
        // end mai wapas mid value banadi q k usse pehle ans mila nahi
        mid=(start+end)/2;

    }
    return -1;
}

int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int value=binsea(even,6,18);
    int val1=binsea(odd,5,16);

    cout << "the value for 18 is:" << value<< endl;
    cout << "the value for 16 is:" << val1<< endl;
    
}
