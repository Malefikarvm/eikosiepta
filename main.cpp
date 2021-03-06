#include <iostream>
#include <cstdlib>

using namespace std;

/**
 * Theory test
 * Project name : {eikosi eptá}
 * eq  : |=> i>0 -> n^i=n^i-1*(n)
 * -eq : |=> i<0 -> n^i=n^i+1/(n)
 */
int64_t pow(int64_t n, int64_t i) {
    int64_t p = 1;
    return (i < 0) ? (pow(n, i + 1)) / n : ((i > 0) ? (pow(n, i-1)) * n : p);
}

int main() {
    cout << pow(3, 3) << endl;
    /*
     * this was tested in linux using the clion output for the build, so fuck the system
     */
    //system("PAUSE");
    return EXIT_SUCCESS;
}


