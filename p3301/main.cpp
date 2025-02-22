#include <bits/stdc++.h>
using namespace std;

ifstream fin("nrdiv9.in");
ofstream fout("nrdiv9.out");

int n,p,cnt,nval,d,cop;

int main(){
    fin>>n;
    for(int i = 1; i*i<=n; ++i){
        cop = i;
        cnt = 1;
        d = 2;
        while(cop>1){
            p = 0;
            while(cop%d==0){
                cop/=d;
                ++p;
            }
            ++d;
            cnt*=(2*p+1);
            if(d*d>cop)
                d = cop;
        }
        if(cnt == 9)
            ++nval;
    }
    fout<<nval;
}