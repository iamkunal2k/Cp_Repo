//Palindrome for non sentive case character


#include<bits/stdc++.h>
using namespace std;

char toLowerCase(char ch) {
	if(ch >= 'a' && ch <= 'z') {
		return ch;
	}
	else {
		char temp = ch - 'A' + 'a';
		return temp;
	}
}

bool palindrome(char arr[], int n){
	int s = 0;
	int e = n-1;

	while(s<=e) {
		if(toLowerCase(arr[s]) != toLowerCase(arr[e])) {
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

