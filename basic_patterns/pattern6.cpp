#include <iostream>
using namespace std;

/*
pattern 6:
1 2 3 4 5
1 2 3 4
1 2 3 
1 2
1
*/

int main() {

    int i, j, a;
    for(i=5; i>0; i--) {
        a = 1;
        for(j=0; j<i; j++) {
            cout<<a <<" "; 
            a++;
        }
        cout<<"\n";
    }


    return 0;
}