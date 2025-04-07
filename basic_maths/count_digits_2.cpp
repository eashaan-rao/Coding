/*
You are given a number ’n’.

Find the number of digits of ‘n’ that evenly divide ‘n’.

Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.

Example:
Input: ‘n’ = 336

Output: 3

Explanation:
336 is divisible by both ‘3’ and ‘6’. Since ‘3’ occurs twice it is counted two times.
*/

#include <iostream>
using namespace std;

int countDigits(int n){
	int count = 0;
    int k = n;
    while(k > 0) {
        int rem = k % 10;
        k = k/10;
        if(rem == 0) {
            continue;
        }
        if(n%rem == 0) {
            count++;
        } 
    }	
    return count;
}

int main() {
    cout<<"count: "<<countDigits(660)<<"\n";
    return 0;
}