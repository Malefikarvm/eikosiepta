#include <iostream>

using namespace std;

/**
 * Theory test
 * Project name : {eikos epta}
 * eq  : |=> i>0 -> n^i=n^i-1*(n)
 * -eq : |=> i<0 -> n^i=n^i+1/(n)
 */
int64_t pow(int64_t n, int64_t i) {
    int64_t p = 1;
    p = (i < 0) ? (pow(n, i + 1)) / n : ((i > 0) ? (pow(n, i-1)) * n : p);
    return p;
}

int main() {
    cout << pow(3, 3) << endl;
    //system("PAUSE");
    return EXIT_SUCCESS;
}


