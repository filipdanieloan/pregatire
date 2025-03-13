#include <bits/stdc++.h>
using namespace std;

ifstream fin("seism.in");
ofstream fout("seism.out");

short c;
int n, ds, dsmax = INT_MIN;
bool status[100001];

int main(){
    fin>>c>>n;
    for(int i = 1; i<=n; ++i){
        fin>>status[i];
        if(status[i] == true)
            ++ds;
        else{
            if(ds > dsmax)
                dsmax = ds;
            ds = 0;
        }
    }
    if(c == 1)
        fout<<dsmax;
}