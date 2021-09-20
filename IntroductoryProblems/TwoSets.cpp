#include <iostream>
#include <vector>

int main() {
    
    int n;
    std::cin >> n;
    
    if(n%4!=0 && n%4!=3){
        std::cout << "NO";
    }
	else{
	    int i = 1;
	    std::vector<int> v1;
	    std::vector<int> v2;
	    
        if(n%4==3){
	        v1.push_back(1);
    	    v1.push_back(2);
            v2.push_back(3);
            i = i+3;
        }

        while(i<=n){
	        v1.push_back(i);
	        v1.push_back(i+3);
	        v2.push_back(i+1);
	        v2.push_back(i+2);
	        i=i+4;
        }
        
        std::cout << "YES\n";
        std::cout << v1.size() << "\n";
        for(int i=0; i<v1.size(); i++){
            std::cout << v1.at(i) << " ";
        }
        
        std::cout << "\n" << v2.size() << "\n";
        for(int i=0; i<v2.size(); i++){
            std::cout << v2.at(i) << " ";
        }
	}
    


    return 0;
}