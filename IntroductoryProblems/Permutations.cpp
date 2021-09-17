#include <iostream>

int main() {
    
	int n;
	std::cin >> n;
    
	if(n<4&&n!=1){
		std::cout << "NO SOLUTION";
	}

	else{
		if(n%2==0){

			for(int i=n-1; i>0; i=i-2){
				std::cout << i << " ";
			}

			std::cout << n << " ";

			for(int i=2; i<n; i=i+2){
				std::cout << i << " ";
			}
		}

		else{
			for(int i=n-1; i>0; i=i-2){
				std::cout << i << " ";
			}

			std::cout << n << " ";

			for(int i=1; i<n; i=i+2){
				std::cout << i << " ";
			}
		}
	
	}

	return 0;
}