#include <bits/stdc++.h>

using namespace std;



int main(){


    const int MAX_BITS = 16;
    int n;
    cin >> n;


    for(long long i=0; i<(2<<n-1); i++){

        long long to_print = i ^ (i >> 1);

        string str = bitset<MAX_BITS>(to_print).to_string();
        cout << str.substr(MAX_BITS-n, MAX_BITS) << "\n";
       
    }





    return 0;
}
