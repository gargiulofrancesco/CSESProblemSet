#include <iostream>

long long max(long long a, long long b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main() {
   
   int tests;
   std::cin >> tests;
   
   long long row, column;
   long long diagonal;
   long long result;
   
   for(int i=0; i<tests; i++){
       
       std::cin >> row;
       std::cin >> column;

       
       diagonal = max(row, column);
       result = (diagonal*(diagonal-1))+1;
       
       if(diagonal%2==0){
           if(row<diagonal){
               result=result-(diagonal-row);
           }
           else if(column<diagonal){
               result=result+(diagonal-column);
           }
       }
       else{
           if(row<diagonal){
               result = result+(diagonal-row);
           }
           else if(column<diagonal){
               result = result-(diagonal-column);
           }           
       }
       
       
       std::cout << result << "\n";
       
   }

    return 0;
}