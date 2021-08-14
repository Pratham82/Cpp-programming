#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin >> a;
    cin >> b;
    int len_a = a.size();
    int len_b = b.size();
    string fin_a, fin_b;
    for(int i =1; i< len_a;i++){
        fin_a += a[i];
    }
    fin_a =  b[0] + fin_a;
    for(int i =1; i< len_b;i++){
        fin_b += b[i];
    }
    fin_b =  a[0] + fin_b;
    cout << len_a  << " "<< len_b<<endl;
    cout << a+b <<endl;
    cout << fin_a <<" "<<fin_b<<endl;
    return 0;
}