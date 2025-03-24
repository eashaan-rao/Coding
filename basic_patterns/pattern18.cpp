#include<iostream>
using namespace std;

/*
Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.
An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.
For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.
Example:
Input: ‘N’ = 3

Output: 
E
D E
C D E
B C D E
A B C D E
*/

void alphaTriangle(int n) {
    char ch;
    
    for(int i=1; i<=n; i++) {
        ch = 'A' + (n-1);
        ch = ch - i + 1;
        for(int j=0; j<i; j++) {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}

int main() {

    alphaTriangle(5);
    return 0;
}