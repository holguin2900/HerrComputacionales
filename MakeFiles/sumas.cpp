#include <iostream>
#include <cmath>
// Este programa compara
//la suma armónica realizada de
//dos manera diferentes

typedef float REAL;
REAL sumup(int N);
REAL sumdown(int N);


int main(void){

  for (int ii = 1; ii < 1000; ++ii ){
    REAL suma1 = sumup(ii);
    REAL suma2 = sumup(ii);
  
    std::cout<<ii<<"\t"<<std::fabs(1-suma1/suma2) <<"\n";
  }
  return 0;
}

REAL sumup(int N)
{  
  REAL suma = 0;
  for (int ii = 1; ii <= N; ++ii ){
    suma += 1.0/ii;
  }
  return suma;
}

REAL sumdown(int N){
  REAL suma = 0;
  for (int ii = N; ii >= 1; --ii ){
    suma += 1.0/ii;
  }
  return suma;
}
