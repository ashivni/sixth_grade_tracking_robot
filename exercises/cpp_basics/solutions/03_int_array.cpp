// 03_int_array: expected output after completion: 13
#include <iostream>

int main() {
    int readings[3] = {2, 4, 6};
    readings[1] = 5;
    int total = readings[0] + readings[1] + readings[2];

    // Provided: print the result.
    std::cout << total << '\n';
    return 0;
}
