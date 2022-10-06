/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3 2 5 1 7

Output:
5
*/

#include<bits/stdc++.h>

using namespace std;

int max(int a, int b){
    return a >= b? a : b;
}

int main(){
    int longest = 1, count = 1;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++){
        count = 1;
        while(s[i] == s[i+1]){
            count++;
            i++;
        }

    longest = max(longest, count);

    }
    cout << longest;
    return 0;
}
