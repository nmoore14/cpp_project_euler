/*
 *  
 *  Problem 1
 *  Find the sum of all of the multiples of 3 or 5 below 100
 *
 *  Answer: 233168
 *
 * */

#include <iostream>

int main() {
  int sum = 0;
  int n = 0;

  while (n < 1000) {
    if (n % 3 == 0 || n % 5 == 0) {
      sum += n;
      n ++;
    } else {
      n ++;
    }
  }

  std::cout << "Total: " << sum << std::endl;

  return 0;
}
