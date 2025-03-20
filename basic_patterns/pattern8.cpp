#include <iostream>
#include <iomanip>
using namespace std;

/*
pattern 8:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the Reverse N-Star Triangle.
Input N=3
*****
 ***
  *
*/

void nStarTriangle(int n) {
    int k=1;
    for(int i=n; i>=1; i--) {
        cout<<setw(k);
        int m = i*2 - 1;
        for(int j=0; j<m; j++) {
            cout<<"*";
        }
        ++k;
        cout<<endl;
    }
}

int main() {

    nStarTriangle(3);

    return 0;
}