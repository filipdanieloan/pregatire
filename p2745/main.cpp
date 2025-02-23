#include <bits/stdc++.h>
using namespace std;

long long int n, t, p, v[11], minp=INT_MAX, maxp=INT_MIN, sumc, d, nrdiv, putere, sums;

int main(){
    cin>>n>>t>>p;
    for(int i = 1; i<=n; ++i){
        cin>>v[i];
        sums+=v[i];
        if(i <= p){
            minp = min(minp, v[i]);
            maxp = max(maxp, v[i]);
        }
    }
    if(t==1){
        while(minp){
            sumc+=(minp%10);
            minp/=10;
        }
        cout<<sumc<<"\n";
    }
    if(t == 2){
        d = 2;
        nrdiv = 1;
        while(maxp > 1){
            putere = 0;
            while(maxp % d == 0){
                maxp/=d;
                ++putere;
            }
            if(putere)
                nrdiv*=(putere+1);
            ++d;
            if(d*d > maxp)
                d=maxp;
        }
        cout<<nrdiv<<"\n";
    }
    cout<<sums;
}