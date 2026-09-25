#include <math.h>
bool isPowerOfFour(int n) {
   double i= log10(n) / log10(4);
   if((int)i==i)
    return true;
    return false;
}