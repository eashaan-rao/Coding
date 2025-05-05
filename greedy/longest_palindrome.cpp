/*
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome 
that can be built with those letters.
Letters are case sensitive, for example, "Aa" is not considered a palindrome.

Level: Easy (Leetcode : 409) 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
Example 2:

Input: s = "a"
Output: 1
Explanation: The longest palindrome that can be built is "a", whose length is 1.
 

Constraints:

1 <= s.length <= 2000
s consists of lowercase and/or uppercase English letters only.
*/

class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        if(n==1){
            return n;
        }
        int palin_length = 0;
        bool flag=false;
        unordered_map<char, int> char_freq;
        for(char ch: s){
            char_freq[ch]++;
        }
    
        for(auto& i: char_freq) {
            if(i.second%2==0) {
                palin_length += i.second;
            } else {
                palin_length += i.second-1;
                flag=true;
            }
        }
        if(flag) {
            return palin_length + 1;
        }

        return palin_length;
    }
};