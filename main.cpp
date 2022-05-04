#include <iostream>
#include "lib.h"
using namespace std;
int main() {
  char a;
  cin>>a;
  if(controllo(a))
  {
   cout<<a;
  }
  else
  {
      cout<<"errore";
  }
    return 0;
}
