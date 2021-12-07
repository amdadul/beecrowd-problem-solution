#include <iostream>
#include <string>

using namespace std;

int main() {
	int j=0;
	string s,r;
	getline(cin,s);
	for(int i=s.length()-1;i>=0;i--)
	{
		r+=s[i];
		j++;
	}
	if(s==r)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}

	return 0;
}
