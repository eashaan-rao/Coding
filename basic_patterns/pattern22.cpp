#include<iostream>
using namespace std;

/*
Ninja has been given a task to print the required pattern and he asked for your help with the same.
You must print a matrix corresponding to the given number pattern.
Example:
Input: ‘N’ = 4

Output: 

4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/

void getNumberPattern(int n) {
    int size = 2*n - 1;
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int dist = min(min(i, j), min(size - i - 1, size - j - 1));
            cout<<n-dist;
        }
        cout<<endl;
    }
}

int main() {
    getNumberPattern(3);
    return 0;
}