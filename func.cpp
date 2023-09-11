#include "vector_esy.h"

void odd_even(vector<int> &in, vector<int> &odd, vector<int> &even){
    for(int i=0; i<in.size(); i++){
        if(in[i]%2 == 0){
            even.push_back(in[i]);
        }else{
            odd.push_back(in[i]);
        }
    }
}

// #include <string>
// #include <iostream>

// int main(){
//     string in;
//     vector<int> input, odd, even;
//     getline(std::cin, in);
//     in += '\n';
//     int tmp;
//     while(1){
//         string tmp_str = in.substr(0, in.find(' '));
//         tmp = stoi(tmp_str);
//         input.push_back(tmp);
//         if(in.find(' ') == -1 && in.find('\n') != -1){
//             break;
//         }
//         in = in.substr(in.find(' ')+1);
//     }
//     cout << "\n\n";
    
//     odd_even(input, odd, even);

//     for(int i=0; i<odd.size(); i++){
//         cout << odd[i] << " ";
//     }
//     cout << "\n";
//     for(int i=0; i<even.size(); i++){
//         cout << even[i] << " ";
//     }
// }