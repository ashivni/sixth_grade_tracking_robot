// 08_array_product: expected output after completion: 24
#include <iostream>

int product(int numbers[], int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result = result * numbers[i];
    }
    return result;
}

int main() {
    int numbers[3] = {2, 3, 4};
    int result = product(numbers, 3);

    // Provided: print the result.
    std::cout << result << '\n';
    return 0;
}
