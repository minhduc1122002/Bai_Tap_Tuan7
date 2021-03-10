#include<iostream>
#include<cstring>
using namespace std;
int check(string s1,string s2) {
	int n1=s1.length();
	int n2=s2.length();
	int dem=0;
	char *a1=&s2[0];
	char *a2=new char [n2];
	for(int i=0;i<=n1-n2;i++) {
		if(s1[i]==s2[0]) {
			for(int j=0;j<n2;j++) {
				a2[j]=s1[i+j];
			}
			if(strcmp(a1,a2)==0) {
				dem++;
			}
		}
	}
	return dem;
}
int main() {
	string s1,s2;
	cin >> s1 >> s2;
	cout << check(s1,s2);
	return 0;
}
