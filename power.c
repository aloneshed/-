#include "myMath.h"
#define e 2.7182818285
double Exponent(int x) {
  int i;
  double p = 1;
  if (x < 0){
    for (i = x; i < 0; i++){
      p *= e;
    }
    return 1/p;
  }
  for (i = 0; i < x; i++){
    p *= e;
  }
  return p;
}

double Power(double x , int y) {
  int i;
  double p = 1;
  if (y < 0) {
    for (i = y; i < 0; i++){
      p *= x;
    }
    return 1/p;
  }
  for (i = 0; i < y; i++){
    p *= x;
  }
  return p;
}
