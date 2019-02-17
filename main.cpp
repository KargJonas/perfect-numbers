#include <iostream>
#include <vector>
using namespace std;


vector<int> getDivisors(int number) {
  vector<int> divisors = {};

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      divisors.push_back(i);
    }
  }

  return divisors;
}

int getVectorSum(vector<int> numbers) {
  int sum = 0;

  for (int i = 0; i < numbers.size(); i++) {
    sum += numbers[i];
  }

  return sum;
}

bool checkPerfect(int number) {
  vector <int> divisors = getDivisors(number);
  int divisorSum = getVectorSum(divisors);

  if (number == divisorSum) {
    return true;
  }

  return false;
}

int main() {
  cout << "starting ..." << endl;
  
  for (int i = 0; ; i++) {
    bool isPerfect = checkPerfect(i);
    if (isPerfect) {
      cout << i << endl;
    }
  }

  return 0;
}
