#include <bits/stdc++.h>

using namespace std;

// Vasya works as a DJ in the best Berland nightclub, and he often uses dubstep music in his performance. Recently, he has decided to take a couple of old songs and make dubstep remixes from them.

// Let's assume that a song consists of some number of words. To make the dubstep remix of this song, Vasya inserts a certain number of words "WUB" before the first word of the song (the number may be zero), after the last word (the number may be zero), and between words (at least one between any pair of neighbouring words), and then the boy glues together all the words, including "WUB", in one string and plays the song at the club.

// For example, a song with words "I AM X" can transform into a dubstep remix as "WUBWUBIWUBAMWUBWUBX" and cannot transform into "WUBWUBIAMWUBX".

// Recently, Petya has heard Vasya's new dubstep track, but since he isn't into modern music, he decided to find out what was the initial song that Vasya remixed. Help Petya restore the original song.

// Input
// The input consists of a single non-empty string, consisting only of uppercase English letters, the string's length doesn't exceed 200 characters. It is guaranteed that before Vasya remixed the song, no word contained substring "WUB" in it; Vasya didn't change the word order. It is also guaranteed that initially the song had at least one word.

// Output
// Print the words of the initial song that Vasya used to make a dubsteb remix. Separate the words with a space.

#define ll long long

int main(){
    char a[201];
    cin >> a;
    bool space = false;
    if(strlen(a) < 3)
    {
        cout << a;
        return 0;
    }
    
    for(int i = 0; i < strlen(a)-2; ++i){
        // cout << "hi";
        if(a[i] == 'W' && a[i+1] == 'U' && a[i+2] == 'B'){
            if(space && i+2 != strlen(a)-1){
                cout << " ";
                space = !space;
            }
            i = i + 2;
        }else{
            space = true;
            cout << a[i];
        }
    }
    int len = strlen(a);
    // cout << "here";
    // cout << a[len-4] << a[len-3] << a[len-2] << a[len-1] << endl;
    if(len > 3 && a[len-4] == 'W' && a[len-3] == 'U' && a[len-2] == 'B'){
    cout << a[len-1];
    }
    else if(len > 4 && a[len-5] == 'W' && a[len-4] == 'U' && a[len-3] == 'B' || !(a[len-3] == 'W' && a[len-2] == 'U' && a[len-1] == 'B')){
        cout << a[len-2] << a[len-1];
    }

    if(len < 3){
        cout << a;
    }
    

    return 0;
}
