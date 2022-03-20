#include <iostream>
using namespace std;
int n,m;
int gop(int n, int m){

    if(m == 0 ){
      return 1;
    } else{
      return gop(n,m-1) * n;
    }       
}

int main()
{
    
    cin >>n>>m;

    cout << gop(n,m);
}