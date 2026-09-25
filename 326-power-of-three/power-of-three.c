#include <math.h>
bool isPowerOfThree(int n) {
    double i=log10(n) / log10(3);
    if((int)i==i)
    return true;
    return false;
}