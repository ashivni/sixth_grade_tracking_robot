// Answer: 10, 2, and 11, each on its own line.
// a becomes 5. Array positions start at 0, so numbers[1] becomes 5.
#include <iostream>

int main() {
    int a = 3;
    int b = 5;
    a = a + 2;
    int numbers[3] = {2, 4, 6};
    numbers[1] = a;

    std::cout << a + b << '\n';
    std::cout << numbers[0] << '\n';
    std::cout << numbers[1] + numbers[2] << '\n';
    return 0;
}
