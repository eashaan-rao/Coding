#include <iostream>
using namespace std;

/*
pattern 3:
1
1 2
1 2 3 
1 2 3 4
1 2 3 4 5
*/

int main() {

    int i, j, a = 0;
    for(i=0; i<5; i++) {
        a = 0;
        for(j=0; j<i+1; j++) {
            cout<<++a <<" "; 
        }
        cout<<"\n";
    }


    return 0;
}