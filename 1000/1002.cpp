#include <bits/stdc++.h>

using namespace std;

// Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
// Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

// Help Petya cope with this easy task.

// Input
// The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

// Output
// Print the resulting string. It is guaranteed that this string is not empty.

#define ll long long

int main(){
    char str[101];
    cin >> str;
    for(int i =0; i < strlen(str);++i){
        if(!(str[i]=='A' || str[i]=='a' ||
        str[i]=='O' || str[i]=='o' ||
        str[i]=='Y' ||str[i]=='y' ||
        str[i]=='E' ||str[i]=='e' ||
        str[i]=='U' ||str[i]=='u' ||
        str[i]=='I' ||str[i]=='i' )){
            cout << "." << (char)tolower(str[i]);
        }
    }

    return 0;
}
