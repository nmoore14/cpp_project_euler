/*
 * Problem 2
 * Fibonacci sequence whose value does not exceed 4 million, add all even values
 *
 * Answer:
 * 
 */

#include <iostream>
using namespace std;

int main() {
  int sum = 0;
  int i = 0;
  int j = 1;
  int k = 0;

  while(k < 4000000) {
    k = i + j;
    if (k % 2 == 0) {
      sum += k;
    }

    i = j;
    j = k;
  }

  cout << "Total: " << sum << endl;

  return 0;
}
