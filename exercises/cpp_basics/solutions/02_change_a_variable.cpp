// 02_change_a_variable: expected output after completion: 9
#include <iostream>

int main() {
    int battery = 10;
    battery = battery - 3;
    battery = battery + 2;

    // Provided: print the result.
    std::cout << battery << '\n';
    return 0;
}
