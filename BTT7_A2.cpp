#include <iostream>
using namespace std;
void F(int *a) {
	cout << sizeof(a) << endl;
}
int main(){
    int a[10];
    int n=sizeof(a);
    cout << n << endl;
    F(a);
    return 0;
    // trong main kick thuoc la 40, ham la 8
}

