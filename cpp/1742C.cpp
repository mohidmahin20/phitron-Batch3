#include<bits/stdc++.h>
#define ll   long long
using namespace std;
char a1[8][8];

int main()
{
   
    ll t; cin >> t;
    while(t--){
        ll r = 0;
        for(ll i = 0; i < 8; i++) for(ll j = 0; j < 8; j++) cin >> a1[i][j];
        for(ll i = 0; i < 8; i++){
            for(ll j = 0; j < 8; j++){
                if(a1[i][j] == 'R') r++;
            }
            if(r == 8) break;
            else r = 0;
        }
        if(r == 8) cout << 'R' << endl;
        else cout << 'B' << endl;
    }
    return 0;
}
