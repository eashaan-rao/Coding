#include <iostream>
using namespace std;

/*
pattern 4:
1
2 2
3 3 3 
4 4 4 4
5 5 5 5 5
*/

int main() {

    int i, j, a = 0;
    for(i=0; i<5; i++) {
        a++;
        for(j=0; j<i+1; j++) {
            cout<<a <<" "; 
        }
        cout<<"\n";
    }


    return 0;
}