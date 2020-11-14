#include "myMath.h"
double Exponent(int x) {
  double e = 2.7182818285;
  int i;
  double p = 1;
  for (i = 0; i < x; i++){
    p *= e;
  }
  return p;
}

double Power(double x , int y) {
  int i;
  double p = 1;
  for (i = 0; i < y; i++){
    p *= x;
  }
  return p;
}
