// bisection
#include <stdio.h>
#include <math.h>
double func(double x) {
return pow(x, 2) - 4;
}
double bisection(double l, double r) {
double mid = (l + r) / 2;
while (fabs(func(mid)) >= 1e-6) {
if (func(mid) * func(l) < 0)
r = mid;
else
l = mid;
mid = (l + r) / 2;
}
return mid;
}
int main() {
double root = bisection(1, 4);
printf("The root of the function is approximately: %.6f\n", root);
return 0;
}
