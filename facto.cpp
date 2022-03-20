#include<iostream>
using namespace std;

int input;

int facto(int n){
  if (n == 1){
    return 1;
  }      
    else{
      return facto(n-1) * n;
    }
        
}

int main(){
  cin >> input;
  cout << facto(input);
}
