#include <iostream>

int main() {
    
    long long n;
    std::cin >> n;
    
    long long result;
    
    for(long long k=1; k<=n; k++){
        
        //possible pairs of points
        result = ((k*k)*((k*k)-1))/2;
        
        /* remove attacking positions 
           there are 2 unique attacking positions for each 2x3 and 3x2 block in the board
           there are (k-1)(k-2) blocks of size 2x3
           there are (k-2)(k-1) blocks of size 3x2
           totally (k-1)(k-2)+(k-2)(k-1) = 2(k-1)(k-2) blocks
           this justifies the 2*2(k-1)(k-2) attacking positions
	*/
        result = result - 4*(k-1)*(k-2);
        
        std::cout << result << "\n";
    }
    
    
    
    return 0;
}