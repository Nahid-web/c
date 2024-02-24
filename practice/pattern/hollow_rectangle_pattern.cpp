#include <iostream>
using namespace std;
int main() {
  int row = 4;
  int column = 5;

  //   cin >> row >> column;

  for (int i = 1; i <= row; i++) {
    for (int j = 1; j <= column; j++) {
      if (i == 1 || i == column || j == column || j == 1) {
        cout << '*';
      }

      else {
        cout << ' ';
      }
    }
    cout << endl;
  }
}
