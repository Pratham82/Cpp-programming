#include <iostream>
#include <stdio.h>

using namespace std;
void update(int *a, int *b) {
  // Complete this function
  cout << "*a => " << *a << endl;
  cout << "*b => " << *b << endl;
  int a_copy =  *a;
  *a =  *a + *b;
  *b =  abs(a_copy - *b);
}

int main() {
  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d", &a, &b);
  update(pa, pb);
  printf("%d\n%d", a, b);

  return 0;
}
