#include <bits/stdc++.h>
#include <map>

using namespace std;

#define ll long long

int main(){
    char rl;
    cin >> rl;
    char str[101];
    cin >> str;
    map<char,char> R;
    char s[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for(int i = (rl=='R'?0:1); i<(rl=='R'?(strlen(s)-1):(strlen(s)));++i){
        
        if(rl=='R'){
            R.insert({s[i+1],s[i]});
        }else{
            R.insert({s[i-1],s[i]});
        }
    }
    for(int i =0;i<strlen(str);++i){
        cout << R[str[i]];
    }
    

    return 0;
}
