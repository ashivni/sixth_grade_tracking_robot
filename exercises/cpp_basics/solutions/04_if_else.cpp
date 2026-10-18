// 04_if_else: expected output after completion: 1
#include <iostream>

int main() {
    int distance = 8;
    int shouldStop = 0;
    if (distance < 10) {
        shouldStop = 1;
    } else {
        shouldStop = 0;
    }

    // Provided: print the result.
    std::cout << shouldStop << '\n';
    return 0;
}
