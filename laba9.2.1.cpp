#include <iostream>
#include <cmath>
using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define POW(x, y) (std::pow((x), (y)))
#define IS_EQUAL(a, b) ((a) == (b))
#define PRINT_RESULT(w) (std::cout << "Результат w = " << (w) << std::endl)

int main() {
    double x, y, z, w;

    cout << "Введіть значення x: ";
    cin >> x;

    cout << "Введіть значення y: ";
    cin >> y;

    cout << "Введіть значення z: ";
   cin >> z;

    if (IS_EQUAL(z, 1)) {
        w = MIN((x - y) * (x - y), ABS(y - x));
    } else {
        w = MAX(x + POW(y, 2), z + POW(x, 2));
    }

    PRINT_RESULT(w); 
    return 0;
}

