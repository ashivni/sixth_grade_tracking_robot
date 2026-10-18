// 05_for_loop: expected output after completion: 10
#include <iostream>

int main() {
    int total = 0;
    for (int i = 0; i < 5; i++) {
        total = total + i;
    }

    // Provided: print the result.
    std::cout << total << '\n';
    return 0;
}
