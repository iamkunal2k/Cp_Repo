#include<bits/stdc++.h>
using namespace std;

void reverseString(char arr[], int size) {
	int s = 0;
	int e = size-1;

	while(s < e) {
		swap(arr[s++], arr[e--]);
	}
}

int getLength(char arr[]) {
	int count = 0;
	for (int i=0; arr[i] != '\0' ; i++) {
		count++;
	}

	return count;
}

int main() {
	char name[20];
	cout<<"Enter your name : ";
	cin>>name;
	cout<<name<<endl;
	int len = getLength(name);
	cout<<"Lenth : "<<len<<endl;
	reverseString(name, len);
	cout<<"The reversed string is : "<<name;
	return 0;
}