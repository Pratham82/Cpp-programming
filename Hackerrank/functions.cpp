#include <iostream>

using namespace std;

int max_of_four(int n1, int n2, int n3, int n4) {
  int max = 0;
  int arr[] = {n1, n2, n3, n4};
  for (int i : arr) {
    if (i > max) {
      max = i;
    }
  }
  return max;
}
int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);
  return 0;
}
