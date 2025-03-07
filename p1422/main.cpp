#include <bits/stdc++.h>
using namespace std;

ifstream fin("ograda.in");
ofstream fout("ograda.out");

long long int c, p, x,v,g, dc, put, cntc, cntp;

int main() {
	fin>>x>>c>>p;
	if(x == 1) {
		if(p%4 == 0) {
			v = (p-4)/4;
			g = c - v;
		}
		else {
			v = p/4;
			g = c - v;
		}
		fout<<g<<" "<<v;
	}
	else {
		dc = 3;
		cntc = 1;
		while(c % 2 == 0) {
			c/=2;
		}
		while(c > 1) {
			put = 0;
			while(c % dc == 0) {
				c/=dc;
				++put;
			}
			if(put)
				cntc*=(put+1);
			++dc;
			if(dc*dc > c)
				dc = c;
		}
        int i;
        for(i = 1; i*i<p; ++i){
            if(p % i == 0){
                if(i%2 == 0)
                    ++cntp;
                if((p/i)%2 == 0)
                    ++cntp;
            }
        }
        if(p == i*i && i%2 == 0)
            ++cntp;
        fout<<cntc<<" "<<cntp;
	}
}