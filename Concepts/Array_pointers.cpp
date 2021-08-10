#include <iostream>

using namespace std;

int main() {
  // Allocation  of arrays will be continuous in the memory
  int arr[10];

  // arr itself is a pointer which will points to the first element's address
  cout << "arr address: " << arr << endl;
  cout << "arr address: " << &arr[0] << endl;
  bool op;
  op = arr == &arr[0];
  cout << op << endl;
}
