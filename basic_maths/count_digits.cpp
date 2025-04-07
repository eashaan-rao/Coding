/*
Problem Statement: Given an integer N, return the number of digits in N.
*/

#include<iostream>
#include<cmath>
using namespace std;

int count_digits(int n) {
    int count = (int)(log10(n) + 1);
    return count;
}


int main() {
    int count = count_digits(1234567);
    cout<<"count:"<<count<<"\n";
    return 0;
}