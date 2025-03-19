#include <iostream>
#include <iomanip>
using namespace std;

/*
pattern 7:
Problem : Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.
Input N=3
  *
 ***
*****
*/

void nStarTriangle(int n) {
    int k=n;
    for(int i=1; i<=n; i++) {
        cout<<setw(k);
        int m = i*2 - 1;
        for(int j=0; j<m; j++) {
            cout<<"*";
        }
        k--;
        cout<<endl;
    }
}

int main() {

    nStarTriangle(10);

    return 0;
}