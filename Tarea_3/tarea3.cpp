#include <iostream>
#include <cmath>
// Este programa compara
//la suma armónica realizada de
//dos manera diferentes

typedef float REAL;
REAL sum1(int N);
REAL sum2(int N);
REAL sum3(int N);


int main(void){

  for (int ii = 1; ii < 1000; ++ii ){
    REAL suma1 = sum1(ii);
    REAL suma2 = sum2(ii);
    REAL suma3 = sum3(ii);
  
    std::cout<<ii<<"\t"<<std::fabs(1-suma1/suma3) <<"\t"<<std::fabs(1 - suma2/suma3) <<"\n";
  }
  return 0;
}

REAL sum1(int N)
{  
  REAL suma = 0;
  int p = -1;
  for (int ii = 1; ii <= N+N; ++ii ){
    suma += p*ii/(ii+1.0);
    p= -p;
  }
  return suma;
}

REAL sum2(int N){
  REAL suma = 0;
  for (int ii = 1; ii <= N; ++ii ){
    suma += 2.0*ii/(2.0*ii+1) - (2.0*ii-1)/(2.0*ii);
  }
  return suma;
}

REAL sum3(int N){
  REAL suma = 0;
  for (int ii = 1; ii <= N; ++ii ){
    suma += 1.0/(2.0*ii*(2.0*ii+1));
  }
  return suma;
}
