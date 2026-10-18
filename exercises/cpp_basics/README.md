# Four simple C++ questions

Practice integers, arrays, if/else, for loops, and functions. Use only `int` and arrays of `int` for your variables.

## How to run

Use [cpp.sh](https://cpp.sh/) in your browser. No installation or Arduino is needed.

1. Open the linked starter file for a question and copy all of its code.
2. Open [cpp.sh](https://cpp.sh/) and replace the example code in the editor with your copied code.
3. For question 1, write down your prediction before running the code. For questions 2–4, complete the `TODO` comments.
4. Click **Run** to see the output. After editing your code, click **Run** again.

The `#include <iostream>`, `int main()`, and final `return 0;` are provided setup. `std::cout << value << '\n';` prints a value on its own line.

## 1. Integers and arrays: what will this code print?

Write down the three lines of output before running this program. Remember: array positions start at **0**.

```cpp
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
```

[Open the code](starter/01_predict_output.cpp).

## 2. If/else: print the greater number

Write code using `if/else` to print the greater of two integers, `a` and `b`. If they are equal, print that number once.

For `a = 4` and `b = 7`, your program should print `7`.

[Open the starter](starter/02_greater_number.cpp).

## 3. For loop: add an array

Write a simple `for` loop that adds all the elements of `{2, 4, 1, 3}`. Store the answer in `total`. The printing code is provided.

Your program should print `10`.

[Open the starter](starter/03_array_sum.cpp).

## 4. Functions: sum and product

Write two functions:

- `int sum(int a, int b)` returns the sum of its two inputs.
- `int product(int a, int b)` returns the product of its two inputs. Use `*` to multiply.

Each function returns one integer. The provided program calls both functions with `3` and `4`. It should print `7`, then `12` on the next line.

[Open the starter](starter/04_sum_and_product.cpp).

## Checking your work

Try each question before opening its matching file in [solutions/](solutions/). You can copy a solution into cpp.sh and click **Run**, just like a starter.

For the teacher: question 1 checks integer assignment, arithmetic, and array indexing. Questions 2–4 ask students to write if/else, a counting loop over an array, and simple functions. For question 2, also check a greater first number and two equal numbers. For question 4, try different small inputs, including zero.
