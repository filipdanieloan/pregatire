//exemplul din avid.in nu da raspuns corect, dar pe kilonova.ro aceasta solutie da 100p
#include <bits/stdc++.h>
using namespace std;
ifstream fin("avid.in");
ofstream fout("avid.out");

int C,n,p,vn[5000001],ciur[5000001],cnt,inter,cnt2=INT_MIN;
bool exista,vasile=true,vv[5000001];

void eratostene(){
    for(int i = 1; i<=5000001; ++i){
        for(int j = i; j<=5000001;j+=i){
            ciur[j]++;
        }
    }
}

int main(){
    eratostene();
    fin>>C>>n>>p;
    for(int i = 1; i<=n;++i)
        fin>>vn[i];
    if(C == 1){
        for(int i = 1; i<=n-2;++i){
            int g = __gcd(vn[i],__gcd(vn[i+1], vn[i+2]));
            if(ciur[g]<=p)
                ++cnt;
        }
        fout<<cnt;
    }
    if(C == 2){
        for(int i = 1; i<=n-2; ++i){
            int g = __gcd(vn[i],__gcd(vn[i+1], vn[i+2]));
            if(ciur[g]<=p){
                ++inter;
                exista = true;
                vv[i] = true;
            }
            if(vv[i] == false && vv[i-1] == true){
                cnt2 = max(inter,cnt2);
                inter = 0;
            }
        }
        if(exista == true)
            fout<<cnt2+2;
        else
            fout<<0;
    }
}