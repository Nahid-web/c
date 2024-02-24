// 8
// 8
// ********
// ********
// ********
// ********
// ********
// ********
// ********
// ********

#include <iostream>
using namespace std;

int main() {
  int row;
  int column;

  cin >> row >> column;

  for (int i = 1; i <= row; i++) {
    //per row
    for (int j = 1; j <= column; j++) {
      cout << '*';
    }
    cout << endl;
  }
}