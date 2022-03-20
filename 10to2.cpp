#include <iostream> 
using namespace std; 
void to(int num) { 
  if (num == 0 || num == 1){ 
    cout << num; 
    return; 
  } 
    to(num/2); 
    cout << num % 2; 
  } 

int main() { 
  int num =0; 
  cin >> num; 
  to(num); 
}

