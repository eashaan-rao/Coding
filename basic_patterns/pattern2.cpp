#include <iostream>
using namespace std;

/*
pattern 2:
*
* *
* * * 
* * * *
* * * * *
*/

int main() {

    int i, j;
    for(i=0; i<5; i++) {
        for(j=0; j<i+1; j++) {
            cout<<"* "; 
        }
        cout<<"\n";
    }


    return 0;
}