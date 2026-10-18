// 06_loop_and_if: expected output after completion: 2
#include <iostream>

int main() {
    int readings[5] = {3, 8, 2, 9, 5};
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (readings[i] > 5) {
            count = count + 1;
        }
    }

    // Provided: print the result.
    std::cout << count << '\n';
    return 0;
}
