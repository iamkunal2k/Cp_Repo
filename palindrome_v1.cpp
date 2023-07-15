// Palindrome when not considering UPPERCASE and lowercase same


#include<bits/stdc++.h>
using namespace std;

bool palindrome(char arr[], int n){
	int s = 0;
	int e = n-1;

	while(s<=e) {
		if(arr[s] != arr[e]){
			return 0;
		}
		else{
			s++;
			e--;
		}
	}
	return 1;
}

int getLength(char name[]) {
	int count = 0;
	for (int i=0; name[i] != '\0' ; i++) {
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
	cout<<"Palindrome or not : "<<palindrome(name, len);
	return 0;
}

