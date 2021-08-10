#include <iostream>
#include <map>
#include <string>

using namespace std;
int main() {
  int start, end;
  cin >> start;
  cin >> end;

  map<int, string> new_map = {
      {1, "one"}, {2, "two"},   {3, "three"}, {4, "four"}, {5, "five"},
      {6, "six"}, {7, "seven"}, {8, "eight"}, {9, "nine"},
  };

  // making a manual iterator
  map<int, string>::iterator it1;
  for (int i = start; i <= end; i++) {
    if (i < 9) {
      it1 = new_map.find(i);
      cout << it1->second << endl;
    } else {
      if (i % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }
    }
  }
}
