#include <iostream>
#include <iomanip>
using namespace std;

/*
pattern 9:
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.
Example:
Input: ‘N’ = 3

Output: 

  *
 ***
*****
*****
 ***
  *
*/

void nStarTriangle(int n) {
    int k=n, m;
    for(int i=1; i<=n; i++) {
        cout<<setw(k);
        m = i*2 - 1;
        for(int j=0; j<m; j++) {
            cout<<"*";
        }
        cout<<endl;
        k--;
    }
    k=1;
    for(int i=n; i>=1; i--) {
        cout<<setw(k);
        m = i*2 - 1;
        for(int j=0; j<m; j++) {
            cout<<"*";
        }
        ++k;
        cout<<endl;
    }
}

int main() {

    nStarTriangle(5);

    return 0;
}