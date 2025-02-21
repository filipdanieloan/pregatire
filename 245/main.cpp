#include <bits/stdc++.h>
using namespace std;

int n, nr, ciur[100001], maxdiv=INT_MIN, minnr=INT_MAX, vv[1000001];

void eratostene(){
    for(int i = 1; i<=100001; ++i){
        for(int j = i; j<=100001;j+=i){
            ciur[j]++;
        }
    }
}


int main(){
    eratostene();
    cin>>n;
    for(int i = 1; i<=n; ++i){
        if(ciur[i] > maxdiv && vv[ciur[i]] == 0){
            maxdiv = ciur[i];
            minnr = i;
        }
    }
    cout<<minnr;
}