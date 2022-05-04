#include <iostream>
#include "lib.h"

using namespace std;

int main(){
   char c;
   cin >> c;
   int n = (int) c;
   bool x = funzione(n);

   if (x==0){
      cout<<"errore"<<endl;
   }else if (x==1){
      if((65 <= n)&&(n <= 90)){
         n=n+32;
         cout <<(char)n<<endl;
      } else if ((97 <=n)&&(n<=122)){
         n=n-32;
         cout<<(char)n<<endl;
      }
   } 
   
          
    return 0;
}
