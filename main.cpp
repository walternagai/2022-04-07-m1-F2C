#include <iostream>
using namespace std;

int main() {
  float celsius, fahrenheit;

  cout << "Entre com o valor em Fahrenheit: ";
  cin >> fahrenheit;

  celsius = (5 * (fahrenheit - 32)) / 9;

  cout << "F = " << fahrenheit 
       << ", C = " << celsius << "\n";
  
  return 0;
}