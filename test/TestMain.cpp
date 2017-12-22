#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(5, 12, 13) == 0);
    assert(getTriangleType(7, 24, 25) == 0);
    assert(getTriangleType(20, 21, 29) == 0);
    assert(getTriangleType(3, 4, 6) == -1);
    assert(getTriangleType(3, 4, 7) == -2);
    assert(getTriangleType(3, 4, 8) == -2);
    assert(getTriangleType(3, 4, 9) == -2);
    assert(getTriangleType(5, 12, 11) == 1);
    assert(getTriangleType(5, 12, 12) == 1);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
