#include <iostream>
#include <stdlib.h>

using namespace std;

/**
 * Theory test
 * Project name : {eikos epta}
 * eq: |=> n^i=n^i-1(n) <-> i>0
 * -eq: |=> n^i=n^i-1/(n) <-> i<0
 */
int64_t pow(int64_t n, int64_t i) {
    int64_t p = 1;
    if (i != 0) {
        if (i < 0){
            p = pow(n, i+1);
        } else if (i > 0) {
            p = pow(n, i-1);
        }
    } else {
        return p;
    }
    if (i < 0) {
        return p / n;
    } else if (i>0) {
        return p * n;
    }
}

int main() {
    cout << pow(2, 31) << endl;
    //system("PAUSE");
    return EXIT_SUCCESS;
}


