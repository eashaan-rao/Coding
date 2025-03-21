#include<iostream>
using namespace std;

/*
Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.
Example:
Input: ‘N’ = 3

Output: 

A
A B
A B C
*/

void nLetterTriangle(int n) {
    char ch;
    for(int i=1; i<=n; i++) {
        ch = 'A';
        for(int j=0; j<i; j++) {
            cout<<ch <<" ";
            ch++;
        }
        cout<<endl;
    }

}

int main() {
    nLetterTriangle(5);
    return 0;   
}