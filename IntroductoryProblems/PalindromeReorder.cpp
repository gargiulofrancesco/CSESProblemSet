#include <bits/stdc++.h>

using namespace std;



int main(){



    string str;
    cin >> str;

    int A[26]={0};

    for(int i=0; i<str.size(); i++){
        A[str.at(i)-'A']++;
    }

    string single_char = "";
    string result="";
    for(int i=0; i<26; i++){
        if(A[i]!=0){
            if(A[i]%2==1 && single_char!=""){
                cout << "NO SOLUTION";
                return 0;
            }
            else if(A[i]%2==1){
                string temp_sc (A[i], (char)(i+'A'));
                single_char = temp_sc;
            }
            else{
                string temp (A[i]/2, (char)(i+'A'));
                result = result + temp;
            }
        }
    }

 
    cout << result << single_char;
    reverse(result.begin(), result.end());
    cout << result;
    

    return 0;
}
