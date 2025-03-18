#include <iostream>
using namespace std;

/*
pattern 5:
5 5 5 5 5
4 4 4 4
3 3 3 
2 2
1
*/

int main() {

    int i, j;
    for(i=5; i>0; i--) {
        for(j=0; j<i; j++) {
            cout<<"* "; 
        }
        cout<<"\n";
    }


    return 0;
}