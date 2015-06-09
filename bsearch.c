#include <stddef.h>
#include <assert.h>

/*
 * returns index of the first element in a greater then k. 
 * if there is no such element returns n.
 */
size_t bsearch(int a[], size_t n, int k) {
    int l = -1;
    int r = n;

    while (l < r - 1) {
        int m = (l + r) / 2;
        if (a[m] <= k)
            l = m;
        else
            r = m;
    }

    return r;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(bsearch(a, 10, 5) == 5);
    assert(bsearch(a, 10, 10) == 10);
    assert(bsearch(a, 10, 100) == 10);
    assert(bsearch(a, 10, 0) == 0);
    assert(bsearch(a, 10, 1) == 1);
    return 0;
}
