#include <iostream>

using namespace std;
int main() {
  /*
    Computer memmory:

    1bit = 8 bytes

    1 bit:

    4 bytes (for an int):

      1   2   3   4
    |   |   |   |   |
    |   |   |   |   |

    Each byte has address in computer mememory its usually stored in binary but
    while accessing through a programming language like C, C++ we will get the
    hexadecimal number for eg. (dxsdd8799)


    Eg. int x;


      1   2   3   4
    |   |   |   |   |
    |   |   |   |   |
      |
      |
    dxc343fdg (byte address)

  */

  int num1 = 3232;
  cout << "Address of num1 " << &num1 << endl;

  // Creating pointer for storing mem location of num1
  int *num1_pt;

  // Storing the memory addres of num1 in a pointer
  // It will store the address of num1's first byte
  num1_pt = &num1;

  // Syntax:
  // Storing the value in pointer
  // <Data type> *pointer_name = &variable_name

  // Accessing the value of pointer
  // *pointer_name

  // Accessing the address location
  // pointer_name

  cout << "Address of num1: " << num1_pt << endl;
  cout << "Value of of num1_pt: " << *num1_pt << endl;

  // Modifying the value of num1 using pointer
  *num1_pt = 1111;
  cout << "Modified value of num1: " << num1 << endl;

  // Pointer addition
  // This will add the number of bytes specific to its data type for eg. if its
  // "int" then 4 bytes will be added to the mem location, and it will go to the
  // next block
  num1_pt += 1;

  cout << "Modified mem location: " << num1_pt << endl;

  /*   // Eg. 2 */
  /*   int num2 = 6434; */
  /*   int *num2_pt = &num2; */
  /*  */
  /*   cout << "Address for num2 pointer: " << num2_pt << endl; */
  /*   cout << "Value for num2 pointer: " << num2_pt << endl; */
}
