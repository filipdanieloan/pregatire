#include <bits/stdc++.h>
using namespace std;

ifstream fin("nrdiv.in");
ofstream fout("nrdiv.out");

unsigned long long int n,nr,d,cnt,p;

int main(){
    fin>>n;
    for(int i = 1; i<=n; ++i){
        fin>>nr;
        d=2;
        cnt=1;
        while(nr>1){
            p = 0;
            while(nr%d==0){
                nr/=d;
                ++p;
            }
            if(p)
                cnt*=(p+1);
            ++d;
            
            if(d*d>nr)
                d = nr;
        }
        fout<<cnt<<"\n";
    }
}