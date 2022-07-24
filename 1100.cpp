#include <bits/stdc++.h>

using namespace std;

// After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

// Input
// The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

// Output
// Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

#define ll long long

int main(){
    int n;
    cin >> n;
    int three=0,two=0,one=0;
    int taxis=0;
    for(int i=0;i< n;++i){
        int s;
        cin >> s;
        if(s==4){
            taxis++;
        }else if(s==3){
            three++;
        }else if(s==2){
            two++;
        }else if(s==1){
            one++;
        }
    }
    if(three>=one){
        three-=one;
        taxis+=one;
        one=0;
        taxis+=three;
    }else{
        taxis+=three;
        one-=three;
        three=0;
        
    }

    taxis+=(two/2);
    two=(two%2==0?0:1);
    if(two>0){
        taxis++;
        if(one>2){
            one-=2;
        }else{
            one=0;
        }
    }
    taxis+=(one/4)+(one%4==0?0:1);
    cout << taxis;
    

    return 0;
}
