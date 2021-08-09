#include <iostream>
#include <map>
#include <string>

using namespace std;
int main(){
    string n = "8";
    int n2 = std::stoi(n);
    map<int,string> dict1 =  {
        {1,"one"},
        {2,"two"},
        {3,"three"},
        {4,"four"},
        {5,"five"},
        {6,"six"},
        {7,"seven"},
        {8,"eight"},
        {9,"nine"},
    };

    string output = "";

    for(auto ptr:dict1){
        if(ptr.first == n2){
            output = ptr.second;
            break;
        }else{
            output =  "Greater than 9";
        }
    }

    cout << output;

}
