#include <stdio.h>

void state(int a, int b, int c, int* S0, int* S1) {
// state0 = a, state1 = b, output0 = c, output1 = d
    int e = !a & !b & !c;
    int f = a & b & !c;
    int g = !a & b & c;
    int h = a & !b & c;
    *S0 = e | f | g | h;
    *S1 = !b;
}

void output(int s0, int s1, int* o0, int* o1) {
    *o0 = s0;
    *o1 = s1;
}
