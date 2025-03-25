#include<iostream>
#include<iomanip>
using namespace std;

/*
Sam is curious about symmetric patterns, so he decided to create one.
For every value of ‘N’, return the symmetry as shown in the example.
Example:
Input: ‘N’ = 3

Output: 
*         *
* *     * *
* * * * * *
* *     * *
*         *
*/

void symmetry(int n) {
    int k=1, l=0;
    bool flag = false;
    int space = 2*n - 2;
    for(int i=1; i<=(2*n - 1); i++) {
        if(k > n) {
            k -= 2;
            flag = true;
            space = 2;
        }
        for(int j=0; j<k; j++) {
            cout<<"*";
        }
        for(int m=0; m < space; m++) {
            cout<<" ";
        }
        for(int j=0; j<k; j++) {
            cout<<"*";
        }
        if (!flag) {
            k++;
            space -= 2;
        } else {
            k--;
            space += 2;
        }
        cout<<endl;
    }
}


int main() {
    symmetry(10);
    return 0;
}