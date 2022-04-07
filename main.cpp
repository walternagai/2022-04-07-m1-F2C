#include <iostream>
using namespace std;

int main() {
  float celsius, F;

  cout << "Entre com o valor em Fahrenheit: ";
  cin >> F;

  celsius = (5 * (F - 32)) / 9;

  cout << "F = " << F 
       << ", C = " << celsius << "\n";
  
  return 0;
}