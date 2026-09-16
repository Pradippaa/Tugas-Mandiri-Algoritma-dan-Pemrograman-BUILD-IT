#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c); 
    int ronde = 0;

    while (!(a == b || b == c || a == c)) {
        if (a >= b && a >= c) { 
            if (b <= c) { a--; b++; }
            else { a--; c++; }
        } else if (b >= a && b >= c) { 
            if (a <= c) { b--; a++; }
            else { b--; c++; }
        } else { 
            if (a <= b) { c--; a++; }
            else { c--; b++; }
        }
        ronde++;
    }

    printf("%d\n", ronde);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}