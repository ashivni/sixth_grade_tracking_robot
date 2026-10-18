#include <iostream>

int sum(int a, int b) {
    return a + b;
}

int product(int a, int b) {
    return a * b;
}

int main() {
    std::cout << sum(3, 4) << '\n';
    std::cout << product(3, 4) << '\n';
    return 0;
}
