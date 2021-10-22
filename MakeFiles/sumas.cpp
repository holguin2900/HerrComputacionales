#include <iostream> // Este programa compara
//la suma armónica realizada de
//dos manera diferentes

typedef float REAL;
REAL sumup(int N);
REAL sumdown(int N);


int main(void){

  std::cout <<sumup(3)<<"\n";
  std::cout<<sumdown(3)<<"\n";
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
