#include <iostream>
#include "Point.hpp"

int main() {
    Point const a (0, 0);
    Point const b(5.0f, 5.0f);
    Point const c(5.0f, 0);
    Point const d(4.33f, 4.0f);

    bool answer = bsp(a, b, c, d);
    (answer) ? cout << "Point is inside a triangle" :
                cout << "Point is outside a triangle";
    return 0;
}