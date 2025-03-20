# include <iostream>
using namespace std;
/*
Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.
Example:
Input: ‘N’ = 3

Output: 

*
**
***
**
*
*/


void nStarTriangle(int n) {
    int i=1, j;
    bool flag = false;
    while(i > 0) {
        if(!flag) {
            for(j=0; j<i; j++) {
                cout<<"* ";
            }
            cout<<endl;
            ++i;
            if(i > n) {
                flag = true;
                i -= 2;

            }
        } else {
            for(j=0; j<i; j++) {
                cout<<"* ";
            }
            cout<<endl;
            --i;
        }
        
        
    }
}

int main() {
    nStarTriangle(3);
    return 0;
}