#include <iostream>

int main() {
    
    int n;
    long long moves=0;
    int curr_max=0;
    
    std::cin >> n;
    std::cin >> curr_max;
    
    int temp;
    for(int i=1; i<n; i++){
        std::cin >> temp;
        if(temp>curr_max){
            curr_max = temp;
        }
        else{
            moves = moves + curr_max - temp;
        }
    }
    
    std::cout << moves;

    return 0;
}