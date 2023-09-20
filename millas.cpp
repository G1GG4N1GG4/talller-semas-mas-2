#include <iostream>
using namespace std;
int main(){
  float pies,mts;
  cout<<"escriba los metros y pies\n";
  cin>>mts>>pies;
  cout<<"metros a millas: "<<mts/1609<<endl<<" metros a pulgadas: "<<mts/0.0254<<endl;
  cout<<"pies a yardas: "<<pies/3<<endl<<" pies a pulgadas: "<<pies*12<<endl;
  return 0;
}