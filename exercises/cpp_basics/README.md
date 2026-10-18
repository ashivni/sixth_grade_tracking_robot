# Your first C++ exercises

Help a pretend robot practice counting, making decisions, and using functions!
Do the exercises in number order. Try each one yourself before opening its matching file in `solutions/`.

## How to run an exercise

Run these exercises in your browser using [cpp.sh](https://cpp.sh/). No installation or Arduino is needed.

1. Open an exercise file in the `starter/` folder, starting with [`01_variables.cpp`](starter/01_variables.cpp).
2. Copy all of the code in that file.
3. Open [cpp.sh](https://cpp.sh/) and replace the example code in the editor with your copied code.
4. Complete the `TODO` comments in the editor.
5. Click **Run** and compare the printed answer with the exercise's expected output.

After changing your code, click **Run** again. For the next exercise, replace the code in the editor with that exercise's starter code.

Every file has a few lines already written for you:

- `#include <iostream>` lets the program print an answer.
- `int main()` marks where the program starts.
- `std::cout << ... << '\n';` prints an answer on its own line.
- `return 0;` at the end of `main` tells the computer the program finished normally.

Leave that setup in place. Your job is to complete the `TODO` comments. The starter files run, but their answers are unfinished.

## Part 1: Integers and arrays

An `int` holds a whole number, such as `3`, `0`, or `-2`.
You can create one with `int steps = 3;` and change it with `steps = steps + 1;`.
An array stores several integers: `int scores[3] = {6, 7, 8};`.
Array positions start at **0**: `scores[0]` is the first element and `scores[2]` is the last. Never use a position outside the array.

### 1. Add the robot's steps

Open `starter/01_variables.cpp`.
Create `leftSteps` with value `4` and `rightSteps` with value `3`. Set `totalSteps` to their sum using `+`.

**Expected output:** `7`.
Try changing the two step counts to `6` and `2`. Predict the new answer before running it.

### 2. Update the battery counter

Open `starter/02_change_a_variable.cpp`.
The battery starts at `10`. Subtract `3` and save the answer back into `battery`. Then add `2` and save it again.

**Expected output:** `9`.
Try starting with `20`. What will the final value be?

### 3. Fix a sensor reading

Open `starter/03_int_array.cpp`.
The array starts as `{2, 4, 6}`. Change its second element to `5`. Add the three elements using their positions and save the sum in `total`.

**Expected output:** `13`.
Try changing the first element to `10` too. What is the new sum?

## Part 2: Decisions and loops

An `if` runs code when a comparison is true. An `else` runs code when it is false:

```cpp
if (points > 5) {
    bonus = 2;
} else {
    bonus = 0;
}
```

A simple counting loop looks like this:

```cpp
for (int i = 0; i < 4; i++) {
    total = total + i;
}
```

`int i = 0` starts the counter. `i < 4` checks whether to keep going. `i++` adds 1 after each turn. This loop uses `i` values `0`, `1`, `2`, and `3`.

### 4. Stop near an obstacle

Open `starter/04_if_else.cpp`.
If `distance` is less than `10`, set `shouldStop` to `1`. Otherwise, set it to `0`. Use both `if` and `else`. Here, `1` means stop and `0` means keep moving.

**Expected output:** `1` for distance `8`.
Try distances `12` and `10`. Both should print `0`.

### 5. Add with a loop

Open `starter/05_for_loop.cpp`.
Use `for (int i = 0; i < 5; i++)` to add each value of `i` to `total`.

**Expected output:** `10`, because `0 + 1 + 2 + 3 + 4 = 10`.
Try changing the loop limit from `5` to `4`. Predict the answer first.

### 6. Count the high readings

Open `starter/06_loop_and_if.cpp`.
Loop through the five readings. Inside the loop, use an `if` to check whether `readings[i] > 5`. If it is, increase `count` by 1.

**Expected output:** `2`, because only `8` and `9` are greater than `5`.
Change the array to `{6, 7, 8, 9, 10}`. The answer should be `5`.

## Part 3: Simple functions

A function does a small job and can send back an answer with `return`:

```cpp
int doubleNumber(int number) {
    return number * 2;
}
```

Calling `doubleNumber(3)` gives back `6`. The input `number` is called a parameter.
For an array input, use `int numbers[]` and a separate `int size` to say how many elements it contains. Always pass the actual number of elements as `size` in these exercises.

### 7. Write an addition function

Open `starter/07_add_function.cpp`.
Complete `add(int a, int b)` so it returns the sum of its two inputs.

**Expected output:** `7` for `add(4, 3)`.
Try `add(10, 5)` (answer `15`) and `add(-2, 5)` (answer `3`).

### 8. Multiply all the elements

Open `starter/08_array_product.cpp`.
Complete `product(int numbers[], int size)`. Create a result starting at `1`. Use a loop to multiply it by each element, then return it. Use `*` for multiplication. Keep inputs small so the result fits in an `int`.

**Expected output:** `24` for `{2, 3, 4}`.
Try `{2, 0, 4}` (answer `0`) and `{1, 5, 2}` (answer `10`).
Think about it: why would starting the result at `0` give the wrong answer?

### 9. Find the greatest element

Open `starter/09_greatest_element.cpp`.
Complete `greatest(int numbers[], int size)`. Start `largest` at the first element. Loop through the array and use `if` to replace `largest` whenever you find something greater. Return `largest` after the loop.

**Expected output:** `9` for `{4, 9, 2, 7, 3}`.
Try `{-4, -9, -2, -7, -3}` (answer `-2`). Starting with the first element instead of `0` makes this work for negative numbers too.
This function requires **at least one element**; do not give it an empty array.

## For the teacher

There are three exercises per topic. Student-written code uses only `int`, arrays of `int`, basic arithmetic and comparisons, assignment, `if/else`, simple `for` loops, and functions returning `int`. Printing and `main` are provided setup.

Each solution has the same filename as its starter. To run one, copy all of its code into [cpp.sh](https://cpp.sh/), replacing the code in the editor, and click **Run**. Ask students to predict the result, run the program, and explain any difference. The extra input suggestions above are optional checks, not additional constructs.
