#include <iostream>


int main() {
    
    long long n;
    int solution = 0;
    std::cin >> n;
    
    for(long long i=5; i<=n; i=i+5){
 
        //count the number of 5s in i prime factorization
	long long temp = i;
        while(temp%5==0){
        	temp=temp/5;
		solution++;
	}

    }
 
    std::cout<<solution;
 
 
    return 0;
}