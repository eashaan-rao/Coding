#include <iostream>
using namespace std;

/*
pattern 1:

* * * *
* * * *
* * * *
* * * *

*/

int main() {

    int i = 4, j = 4;
    for(i=0; i<4; i++) {
        for(j=0; j<4; j++) {
            cout<<"* "; 
        }
        cout<<"\n";
    }


    return 0;
}