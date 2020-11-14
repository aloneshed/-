#include <stdio.h>
#include "myMath.h"

int main () {
  double x;
  printf("Please inset a real number:\n");
  scanf("%lf", &x);

  double eInX = Exponent((int)x);
  double xIn3 = Power(x, 3);
  double fx1 = sub(add(eInX,xIn3),2);

  double xTime3 = mul(x, 3);
  double xIn2Time2 = mul(Power(x, 2), 2);
  double fx2 = add(xTime3, xIn2Time2);

  double xIn3Time4 = mul(xIn3, 4);
  double xTime2 = mul(x, 2);
  double fx3 = sub(div(xIn3Time4, 5), xTime2);

  printf("i.    The value of f(x) = e^x + x^3 - 2 at the point %lf is: %0.4f\n", x, fx1);
  printf("ii.   The value of f(x) = 3x + 2x^2 at the point %lf is: %0.4f\n", x, fx2);
  printf("iii.  The value of f(x) = (4x^3)/5 - 2x at the point %lf is: %0.4f\n", x, fx3);

  return 0;
}
