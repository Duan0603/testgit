#include<bits/stdc++.h>

using namespace std;

void check(long long x, long long y){
	long long a ,b;
	a=x/abs(__gcd(x,y));
	b=y/abs(__gcd(x,y));
	if (a<0&&b<0){
		a*=-1;
		b*=-1;
	}
	if(a+b<=0){
		cout << 0 << " "<< 0 << endl;
	}
	else if(x/y==a/b){
		cout << a << " " << b << endl;
	}

}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long t; 
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		check(a,b);
	}

	return 0;
}