#include <iostream>
#include<cmath>
using namespace std;
int binary_search(int *a,int n,int x) {
	int L=0;
	int R=n-1;
	while(L<=R) {
		int m=floor((L+R)/2);
		if(a[m]<x) {
			L=m+1;
		}
		else if(a[m]>x) {
			R=m-1;
		}
		else {
			return m;
		}
	}
}
int main(){
    int n;
	cin >> n;
    int *a=new int [n];
    for(int i=0;i<n;i++) {
    	cin >> a[i];
	}
	int x;
	cin >> x;
	cout << binary_search(a,n,x);
    return 0;
}
