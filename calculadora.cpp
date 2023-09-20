#include <iostream>
using namespace std;
int main(){
  double x,y;
  int z;
  cout<<"numero 1 ";
  cin>>x;
  cout<<"numero 2";
  cin>>y;
  cout<<"que quiere hacer \n";
  cout<<"sumar 1\n";
  cout<<"restar 2\n";
  cout<<"multiplicar 3\n";
  cout<<"dividir 4\n";
  cin>>z;
  switch(z){
    case 1:
      cout<<x+y;
      break;
    case 2:
      cout<<x-y;
      break;
    case 3:
      cout<<x*y;
      break;
    case 4:
      cout<<x/y;
      break;

  return 0;
  }
}