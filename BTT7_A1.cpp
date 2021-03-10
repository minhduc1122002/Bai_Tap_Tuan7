#include <iostream>
using namespace std;
int main() {
    {
        int *pX;
        *pX=5;
    }
    // con tro chua khoi tao
    {
        int *pX=NULL;
        *pX=0;
    }
    // truy nhap con tro NULL
    {
        int *pX;
        {
        	int a=1,b=2;
            int c=a+b;
            pX = &c;
        }
    }
    // dangling references
    return 0;
}
