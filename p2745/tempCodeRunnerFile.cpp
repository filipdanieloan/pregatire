#include <bits/stdc++.h>
using namespace std;

int n, t, p, v[11], minp=INT_MAX, maxp=INT_MIN, sumc, d, nrdiv, sums;

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
        cout<<sumc;
    }
    if(t == 2){

    }
    cout<<sums;
}