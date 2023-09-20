#include <iostream>
using namespace std;
int main(){
  int minutos1,segundos1;
  int minutos2,segundos2;
  cout<<"minutos y segundos del primer atleta ";
  cin>>minutos1>>segundos1;
  cout<<"minutos y segundos del segundo atleta ";
  cin>>minutos2>>segundos2;
  int totalmin=minutos1+minutos2;
  int totalseg=segundos1+segundos2;
  if (totalseg>=60){
    totalmin+=totalseg/60;
    totalseg%=60;
  }
  int horas=totalmin/60;
  int minutos=totalmin%60;
  cout<<"total \n"<<horas<<" horas\n"<<minutos<<" minutos\n"<<totalseg<<" segundos\n";

  return 0;
  
}



