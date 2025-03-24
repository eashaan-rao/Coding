#include<iostream>
#include<iomanip>
using namespace std;

/*
Sam is curious about symmetric patterns, so he decided to create one.
For every value of ‘N’, return the symmetry as shown in the example.
Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
*/

void symmetry(int n) {
    int space=0;
    // upper pattern
    for(int i=0; i<n; i++) {
        // stars
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        //space 
        for(int k=0; k<space; k++) {
            cout<<" ";
        }
        //stars
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        space += 2;
        cout<<endl;
    }
    // lower pattern
    space -= 2;
    for(int i=n-1; i>=0; i--) {
        // stars
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        //space 
        for(int k=0; k<space; k++) {
            cout<<" ";
        }
        //stars
        for(int j=1; j<=n-i; j++) {
            cout<<"*";
        }
        space -= 2;
        cout<<endl;
    }
    
}

int main() {
    symmetry(3);
    return 0;
}