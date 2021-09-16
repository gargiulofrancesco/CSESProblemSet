#include <iostream>

int main() {
    
    int result = 0;
    int n;
    std::cin >> n;
    
    //XOR all numbers from 1 to n
    for(int i=1; i<=n; i++){
        result = result ^ i;
    }
    
    //remove duplicates
    int temp;
    for(int i=0; i<n-1; i++){
        std::cin >> temp;
        result = result ^ temp;
    }
    
    std::cout << result;

    return 0;
}