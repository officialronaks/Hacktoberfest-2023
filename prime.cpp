#include <iostream>

using namespace std;

int main() {
  int number;
  bool is_prime;

  cout << "Enter a number: ";
  cin >> number;

  is_prime = true;
  for (int i = 2; i <= number / 2; i++) {
    if (number % i == 0) {
      is_prime = false;
      break;
    }
  }

  if (is_prime) {
    cout << "The number is prime." << endl;
  } else {
    cout << "The number is not prime." << endl;
  }

  return 0;
}
