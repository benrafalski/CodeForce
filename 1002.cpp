#include <bits/stdc++.h>

using namespace std;

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
