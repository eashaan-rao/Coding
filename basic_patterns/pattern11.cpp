# include <iostream>
using namespace std;

/*
Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.
You are required to print the pattern as shown in the examples below.
Example:
Input: ‘N’ = 3

Output: 

1
0 1
1 0 1
*/

void nBinaryTriangle(int n) {
    int k = 1;
    for(int i=1; i<=n; i++) {
        if(i%2 == 1)  k=1;
        for(int j=0; j<i; j++){
            cout<<k <<" ";
            if(k==0){
                ++k;
            }  else {
                --k;
            }    
        }
        cout<<endl;
        
    }
}

int main() {
    nBinaryTriangle(5);
    return 0;
}