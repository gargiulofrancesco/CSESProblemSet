#include <iostream>

int main() {
    
    const long long modulo = 1000000007;
    
    long long result=2;
    int n;
    std::cin >> n;
    
    for(int i=1; i<n; i++){
        result = (result<<1)%modulo;
    }
    
    std::cout << result;

    return 0;
}