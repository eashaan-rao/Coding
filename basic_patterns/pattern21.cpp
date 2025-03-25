#include<iostream>
using namespace std;

/*
Ninja has been given a task to print the required star pattern and he asked your help for the same.
You must return an ‘N’*’N’ matrix corresponding to the given star pattern.
Example:
Input: ‘N’ = 4

Output: 

****
*  *
*  *
****
*/

void getStarPattern(int n) {
    for(int i=0; i<n; i++) {
        if(i==0 || i==n-1) {
            for(int j=0; j<n; j++) {
                cout<<"*";
            }
        } else {
            cout<<"*";
            for(int j=0; j<n-2; j++) {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}


int main() {
    getStarPattern(10);
    return 0;
}