/*
Problem Statement: Given an integer N return the reverse of the given number.
*/

#include<iostream>
#include<string>
using namespace std;

int reverse(int n) {
    int rem, rev=0;
    int k = n;
    while(k>0) {
        rem = k % 10;
        k = k /10;
        rev = rev * 10 + rem;
    }
    return rev;
}

int main() {
    cout<<"Reverse Number: "<<reverse(1230045)<<"\n";
    return 0;
}