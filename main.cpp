#include <iostream>
using namespace std;


int getDivisorSum(int number) {
  int divisorSum = 1;

  // We can skip 1
  for (int i = 2; i < number; i++) {
    if (number % i == 0) {
      divisorSum += i;
    }
  }

  return divisorSum;
}

bool checkPerfect(int number) {
  int divisorSum = getDivisorSum(number);

  // A number is perfect if it is equal to
  // the sum of it's divisors.
  if (number == divisorSum) {
    return true;
  }

  return false;
}

int main() {
  for (int i = 0; ; i++) {
    bool isPerfect = checkPerfect(i);
    if (isPerfect) {
      cout << i << endl;
    }
  }

  return 0;
}
