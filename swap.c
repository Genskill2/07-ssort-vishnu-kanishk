#include <stdio.h>

void swap_max(int a[], int b, int c) {
    int d = a[c];
    int e=0;
    for (int i=c; i<b; i++) {
        if (a[i] > d) {
            d = a[i];;
            e = i;
        }
    }
    if (d!=a[c]) {
        a[e] = a[c];
        a[c] = d;
    }
}

void ssort(int p[], int m) {
    for (int i=0;i<m;i++) {
        swap_max(p,m,i);
    }
}
