#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "mylib/mylib.h"

int main() {
    int loop = 0, s0 = 0, s1 = 0, o0 = 0, o1 = 0, S0 = 0, S1 = 0, input1 = 0;
    // Loops The Code
    while (loop == 0) {
        if (S0 == 0 && S1 == 0){
            printf("\n             Off            ");
            printf("\n             /\\           ");
            printf("\n         ==========        ");
            printf("\n       //          \\\\      ");
            printf("\n      //            \\\\     ");
            printf("\n     ||              ||     ");
            printf("\n   3 ||              ||  1   ");
            printf("\n     ||              ||     ");
            printf("\n      \\\\            //     ");
            printf("\n       \\\\          //     ");
            printf("\n         ==========        ");
            printf("\n                           ");
            printf("\n              2           ");
        } else if (S0 == 0 && S1 == 1) {
            printf("\n             Off            ");
            printf("\n                        ");
            printf("\n         ==========        ");
            printf("\n       //          \\\\      ");
            printf("\n      //            \\\\     ");
            printf("\n     ||              ||     ");
            printf("\n   3 ||              ||> 1   ");
            printf("\n     ||              ||     ");
            printf("\n      \\\\            //     ");
            printf("\n       \\\\          //     ");
            printf("\n         ==========        ");
            printf("\n                           ");
            printf("\n              2           ");
        } else if (S0 == 1 && S1 == 0) {
            printf("\n             Off            ");
            printf("\n                        ");
            printf("\n         ==========        ");
            printf("\n       //          \\\\      ");
            printf("\n      //            \\\\     ");
            printf("\n     ||              ||     ");
            printf("\n   3 ||              || 1   ");
            printf("\n     ||              ||     ");
            printf("\n      \\\\            //     ");
            printf("\n       \\\\          //     ");
            printf("\n         ==========        ");
            printf("\n             \\/             ");
            printf("\n              2           ");
        } else if (S0 == 1 && S1 == 1) {
            printf("\n             Off            ");
            printf("\n                        ");
            printf("\n         ==========        ");
            printf("\n       //          \\\\      ");
            printf("\n      //            \\\\     ");
            printf("\n     ||              ||     ");
            printf("\n   3<||              || 1   ");
            printf("\n     ||              ||     ");
            printf("\n      \\\\            //     ");
            printf("\n       \\\\          //     ");
            printf("\n         ==========        ");
            printf("\n                         ");
            printf("\n              2           ");
        }
        printf("\nEnter First Value for Button 1 (0 backward/ 1 forward):");
        scanf("%d", &input1);
        if (S0 == 0 && S1 == 0){
            if (input1 == 1) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              ||> 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                           ");
                printf("\n              2           ");
            } else if (input1 == 0) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3<||              || 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                         ");
                printf("\n              2           ");
            }
        } else if (S0 == 0 && S1 == 1) {
            if (input1 == 1) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              || 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n             \\/             ");
                printf("\n              2           ");
            } else if (input1 == 0) {
                printf("\n             Off            ");
                printf("\n             /\\           ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              ||  1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                           ");
                printf("\n              2           ");
            }
        } else if (S0 == 1 && S1 == 0) {
            if (input1 == 1) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3<||              || 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                         ");
                printf("\n              2           ");
            } else if (input1 == 0) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              ||> 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                           ");
                printf("\n              2           ");
            }
        } else if (S0 == 1 && S1 == 1) {
            if (input1 == 1) {
                printf("\n             Off            ");
                printf("\n             /\\           ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              ||  1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n                           ");
                printf("\n              2           ");
            } else if (input1 == 0) {
                printf("\n             Off            ");
                printf("\n                        ");
                printf("\n         ==========        ");
                printf("\n       //          \\\\      ");
                printf("\n      //            \\\\     ");
                printf("\n     ||              ||     ");
                printf("\n   3 ||              || 1   ");
                printf("\n     ||              ||     ");
                printf("\n      \\\\            //     ");
                printf("\n       \\\\          //     ");
                printf("\n         ==========        ");
                printf("\n             \\/             ");
                printf("\n              2           ");
            }
            printf("\e[1;1H\e[2J");
        }
        state(s0, s1, input1, &S0, &S1);
        s0 = S0;
        s1 = S1;
        output(s0, s1, &o0, &o1);
        printf("\033[2J");
    }
}
