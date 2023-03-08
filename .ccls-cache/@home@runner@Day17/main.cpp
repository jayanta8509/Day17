// Write a program to find the Factors of a number
#include <iostream>
using namespace std;
void Factors(int a) {
  for (int i = 1; i <= a; i++) {
    if (a % i == 0) {
      cout << i << ",";
    }
  }
}
int main() {
  // std::cout << "Hello World!\n";
  int ok = 14;
  Factors(ok);
}