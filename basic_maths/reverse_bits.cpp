/*
There is a song concert going to happen in the city. The price of each ticket is equal to the number obtained 
after reversing the bits of a given 32 bits unsigned integer ‘n’.

Sample Input 1 :
2
0
12
Sample Output 1:
 0
 805306368
Explanation For Sample Input 1 :
For the first test case :
Since the given number N = 0 is represented as 00000000000000000000000000000000 in its binary representation. 
So after reversing the bits, it will become 00000000000000000000000000000000 which is equal to 0 only. So the output is 0.     

For the second test case :
Since the given number N = 12 is represented as 00000000000000000000000000001100 in its binary representation. 
So after reversing the bits, it will become 0110000000000000000000000000000, which is equal to 805306368 only. 
So the output is 805306368.
*/

#include <iostream>
#include <string>
#include <algorithm>

unsigned long reverseBits(unsigned long n) {
    unsigned long reversed = 0;
    for (int i = 0; i < 32; ++i) {
        if ((n >> i) & 1) {
            reversed |= (1UL << (31 - i));
        }
    }
    return reversed;
}

int main() {
    std::cout << reverseBits(12) << std::endl;

    return 0;
}