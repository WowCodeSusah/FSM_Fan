#include <stdio.h>

void state(int a, int b, int c, int d, int* S0, int* S1) {
// state0 = a, state1 = b, output0 = c, output1 = d
    int e = !a & c & !d;
    int f = !b & c & d;
    int g = b & !c & d;
    int h = a & !c & !d;
    *S0 = e | f | g | h;
    int i = !a & !b & d;
    int j = b & !d;
    int k = a & !d;
    *S1 = i | j | k;
}

void output(int s0, int s1, int* o0, int* o1) {
    *o0 = s0;
    *o1 = s1;
}