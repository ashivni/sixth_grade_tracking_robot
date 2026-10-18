#include <iostream>

int main() {
    int numbers[4] = {2, 4, 1, 3};
    int total = 0;

    for (int i = 0; i < 4; i++) {
        total = total + numbers[i];
    }

    std::cout << total << '\n';
    return 0;
}
