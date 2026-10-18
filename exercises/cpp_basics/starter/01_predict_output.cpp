// What will this code print? Write down all three lines before running it.
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
