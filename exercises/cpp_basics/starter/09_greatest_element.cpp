// 09_greatest_element: expected output after completion: 9
#include <iostream>

int greatest(int numbers[], int size) {
    // The array must contain at least one element.
    // TODO: Start with an int largest equal to numbers[0].
    // Loop through the array. If numbers[i] is greater than largest,
    // store numbers[i] in largest. Return largest.
    return 0;
}

int main() {
    int numbers[5] = {4, 9, 2, 7, 3};
    int result = greatest(numbers, 5);

    // Provided: print the result.
    std::cout << result << '\n';
    return 0;
}
