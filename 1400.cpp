#include <bits/stdc++.h>


// uint64_t // 10^19
// uint32_t // 4*10^9
// uint16_t // 6*10^4
// uint8_t // 2*10^2

using namespace std;

// You have a positive integer m and a non-negative integer s. Your task is to find the smallest and the largest of the numbers that have length m and sum of digits s. The required numbers should be non-negative integers written in the decimal base without leading zeroes.

// Input
// The single line of the input contains a pair of integers m, s (1 ≤ m ≤ 100, 0 ≤ s ≤ 900) — the length and the sum of the digits of the required numbers.

// Output
// In the output print the pair of the required non-negative integer numbers — first the minimum possible number, then — the maximum possible number. If no numbers satisfying conditions required exist, print the pair of numbers "-1 -1" (without the quotes).

#define ll long long
#define EACH(x,a) for(auto&x:a)

int amin[100];
bool foundmin=false;
// int max[100];

// m=2, s=15, min=1
int func1(int m, int s, int min){




}

int func2(int m, int s, int max){

    if(m==1){
        return s;
    }

    if(m==2){
        if(s-max<10 && s-max>=0){
            cout << max;
            cout << func2(m-1, s-max, 9);
        }else{
            func2(m,s,max-1);
        }
    }else{
        if(s-max>=0){
            cout << max;
            func2(m-1,s-max,9);
        }else{
            cout << -1;
        }
    }
    

    return 0;

}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m;
    int s;
    cin >> m >> s;
    int min[m];
    int max[m];



    if(s <= m*9 && (s > 0)||(m==1&&s==0)){
        if(s>9){
            int num9 = s/9;
            int mod = s%9;
            if(num9==m){
                for(int i=0;i<num9;++i){
                    cout << 9;
                }
                cout << " ";
                for(int i=0;i<num9;++i){
                    cout << 9;
                }
            }
            else if(num9==(m-1)){
                cout << mod;
                for(int i=0;i<num9;++i){
                    cout << 9;
                }

                cout << " ";

                
                for(int i=0;i<num9;++i){
                    cout << 9;
                }
                cout << mod;

            }else{
                cout << 1;
                for(int i = 0;i<(m-num9-2);++i){
                    cout << 0;
                }
                if(mod-1<0){
                    num9--;
                    cout << 0;
                    cout << 8;
                }else{
                    cout << mod-1;
                }
                for(int i=0;i<num9;++i){
                    cout << 9;
                }

                cout << " ";
                num9=s/9;
                
                for(int i=0;i<num9;++i){
                    cout << 9;
                }
                cout << mod;
                for(int i=0;i<(m-num9-1);++i){
                    cout << 0;
                }

            }
        }else{
            if(m==1){
                cout << s;
            }else{
                cout << 1;
                for(int i=0;i<(m-2);++i){
                    cout << 0;
                }
                cout << (s-1);
            }
            


            cout << " ";

            cout << s;
            for(int i=0;i<(m-1);++i){
                cout << 0;
            }


        }
    }else{
        cout << -1 << " " << -1;
    }

    // func1(m,s,1);
    // if(!foundmin){
    //     cout << -1 << " " << -1;
    //     return 0;
    // }
    // for(int i=m;i>0;--i){
    //     cout << amin[i] << " ";
    // }



    // func1(m,s,1);
    // cout << " : ";
    // func2(m,s,9);



    // if(m==2){
    //     if(s==15){
    //         cout << 69 << " " << 96;
    //     }
    //     else cout << 10 << " " << 10;
    // }else cout << -1 << " " << -1;


    // for(int i=0;i<m;++i){
    //     if(i==(m-2)){

    //     }else{
    //         for(int j=1;j<10;++j){
    //             if(j==1&&(s-j)<10){
    //                 cout << -1 << " " << -1;
    //                 return 0;
    //             }else{

    //             }
    //         }
    //     }
    // }


    // func(m, s, 1);

    // // int min;
    // for(int i=0;i<m;++i){
    //     if(i==(m-2)){
    //         for(int j=(i==0?1:0); j<10;++j){
    //             if(s-j<10){
    //                 min[i]=j;
    //                 s-=j;
    //                 break;
    //             }
    //         }
    //     }else{

    //     }
        
    // }

    // min[m-1]=s;

    // for(int i=0;i<m;++i){
    //     cout << min[i];
    // }


    // sum of m numbers
    // sum equals s
    // for(int i=0;i<m;++i){

    //     for(int (i==0?1:0);j<s;++j){
    //         min[]   
    //     }
    // }

    // start with 15
    // sub i from 15 





    return 0;
}
