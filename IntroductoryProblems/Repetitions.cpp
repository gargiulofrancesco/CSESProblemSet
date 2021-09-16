#include <iostream>

using namespace std;

int main() {

    string str;
    cin >> str;
    
    char current_char = str.at(0);
    int max = 1;
    int local_value = 1;


    for(int i=1; i<str.size(); i++){
 
        if(str.at(i)==current_char){
            local_value++;
        }
        else{
            local_value = 1;
        }
        
        
        if(local_value > max){
            max = local_value;
        }
        
        current_char = str.at(i);
    }
    
    cout << max;

    return 0;
}