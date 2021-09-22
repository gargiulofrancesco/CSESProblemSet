#include <bits/stdc++.h>
using namespace std;

 
int main(){

	int t;
	cin >> t;

	while(t--){
		int a,b;
		cin >> a >> b;
		cout << (2*a-b>=0 && 2*b-a>=0 && (2*a-b)%3==0 && (2*b-a)%3==0 ? "YES":"NO") << "\n";
	}
 
 
    return 0;
}
