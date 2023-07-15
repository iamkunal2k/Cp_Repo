#include <bits/stdc++.h>
using namespace std;

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

	cout<<"Lenth : "<<getLength(name)<<endl;
	return 0;
}