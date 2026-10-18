// 09_greatest_element: expected output after completion: 9
#include <iostream>

int greatest(int numbers[], int size) {
    int largest = numbers[0];
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    return largest;
}

int main() {
    int numbers[5] = {4, 9, 2, 7, 3};
    int result = greatest(numbers, 5);

    // Provided: print the result.
    std::cout << result << '\n';
    return 0;
}
