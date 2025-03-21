#include<iostream>
#include<iomanip>
using namespace std;

/*
Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.
An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.
For every value of ‘N’, help sam to return the corresponding Alpha-Hill.
Example:
Input: ‘N’ = 3

Output: 
    A
  A B A
A B C B A
*/

void alphaHill(int n) {
    char ch;
    int k, m;
    for(int i=1; i<=n; i++) {
        ch = 'A';
        k = 2*(n-i) + 1;
        m = 1;
        cout<<setw(k);
        for(int j=0; j < (2*i -1); j++) {
            if(m < i) {
                cout<<ch<<" ";
                m++;
                ch++;
            } else if (m == i){
                cout<<ch<<" ";
                m++;
            } else {
                ch--;
                cout<<ch<<" ";
                m++;
            }
        }
        cout<<endl;
    }
}

int main() {
    alphaHill(3);
    return 0;  
}