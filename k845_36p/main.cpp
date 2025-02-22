//acest cod da 36p pe kilonova.ro si pbinfo.ro
#include <bits/stdc++.h>
using namespace std;

ifstream fin("munte.in");
ofstream fout("munte.out");

int n, v[101], cnt1, cnt2, cnt3, cnteliminate;
bool vv[101], exista[101]; //daca vv[i]=true, atunci v[i] este varful unui munte; daca i<=n, exista[i] = true

int main() {
	fin>>n;
	for(int i = 1; i<=n; ++i) {
		fin>>v[i];
		exista[i] = true;
	}
	for(int i = 2; i <= n-1; ++i)
		if(v[i-1] < v[i] && v[i] > v[i+1]) {
			++cnt1;
			vv[i] = true;
		}
	fout<<cnt1<<"\n";
    int cop = n;
	for(int i = 2; i <= n-1; ++i) {
		if(vv[i] == true) {
			++cnteliminate;
			for(int j = i; j <= n-1; ++j) {
				v[j] = v[j+1];
				vv[j] = false;
				exista[n] = false;
			}
			--n;
		}
		for(int j = 1; j<=n; ++j)
			if(v[j-1] < v[j] && v[j] > v[j+1] && vv[j] == false) {
				++cnt2;
				vv[j] = true;
			}
	}
	fout<<cnt2<<"\n";
    cnt3 = cop-cnteliminate;
    fout<<cnt3;

}