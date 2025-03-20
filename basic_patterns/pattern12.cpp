# include<iostream>
# include<iomanip>
using namespace std;


/*
Aryan and his friends are very fond of the pattern. They want to make the Reverse N-Number Crown for a given integer' N'.
Given 'N', print the corresponding pattern.
Example:
Input: ‘N’ = 3

Output: 

1         1
1 2     2 1
1 2 3 3 2 1
*/

void numberCrown(int n) {
    int k;
    int m;
    for(int i=1; i<=n; i++) {
        m=1;
        k = 2 * (n - i) + 1;
        while(m <= i) {
            cout<<m <<" ";
            ++m;
        }
        --m;
        cout<<setw(k);
        while(m > 0) {
            cout<<m<<" ";
            --m;
        }
        cout<<endl;
    }
}

int main() {
    numberCrown(3);
    return 0;
}