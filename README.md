Initial plan

The program shows a menu with four choices and asks the user to enter a number . Based on the choice, it asks for the dimensions of a circle, rectangle, or triangle, calculates the area, and prints it with a label. It handles one choice per run.

Variables (all double except the choice): choice (int), radius, length, width, base, height, and area. Named constants: PI = 3.14159, plus names for the menu choices (CIRCLE, RECTANGLE, TRIANGLE, QUIT).

Calculations: circle = PI * radius * radius, rectangle = length * width, triangle = base * height * 0.5. Each result is stored in area first, and then area is printed.

Checks: an if / else if chain compares choice to 1, 2, 3, and 4. Any other number goes to the final else and prints an invalid-choice error. Before calculating, I check whether each dimension is less than 0. If it is, I print an error and skip the calculation. Zero is allowed. For choice 4, the program prints a goodbye message without asking for any dimensions.

Expected output: a labeled area (for example, "Area of the circle: 12.56636") or an error message.

How to compile and run
Use onliGDB and use the language c++

Enter the menu choice, then enter the dimensions when prompted. The program ends after one calculation.

Display precision

Areas are displayed in fixed notation with 5 decimal places (fixed and setprecision(5)), so 12.56636 shows in full. Whole-number answers  show  zeros, such as 13.50000.

Test records

I compiled with the command above (no warnings or errors) and ran each test.

| # | Input | Expected | Actual output | Match? |
|---|-------|----------|---------------|--------|
| 1 | Choice 1, radius 2 | Area 12.56636 | Area of the circle: 12.56636 | Yes |
| 2 | Choice 2, length 3, width 4.5 | Area 13.5 (13.50000 at 5 places) | Area of the rectangle: 13.50000 | Yes |
| 3 | Choice 3, base 5, height 3 | Area 7.5 (7.50000) | Area of the triangle: 7.50000 | Yes |
| 4 | Choice 4 | Ends, no dimension prompts, no area | Goodbye. | Yes |
| 5 | Choice 0 | Invalid-choice error | Error: invalid choice. Please enter a number from 1 to 4. | Yes |
| 6 | Choice 5 (separate run) | Invalid-choice error | Error: invalid choice. Please enter a number from 1 to 4. | Yes |
| 7 | Choice 1, radius -1 | Error | Error: the radius cannot be negative. | Yes |
| 8 | Choice 2, length -1, width 4 | Error | Error: the length cannot be negative. | Yes |
| 9 | Choice 2, length 3, width -1 | Error | Error: the width cannot be negative. | Yes |
| 10 | Choice 3, base -1, height 3 | Error | Error: the base cannot be negative. | Yes |
| 11 | Choice 3, base 5, height -1 | Error | Error: the height cannot be negative. | Yes |
| 12 | Choice 1, radius 0 | Area 0 | Area of the circle: 0.00000 | Yes |
| 13 | Choice 3, base 7, height 2.5 | Area 8.75 (7 * 2.5 * 0.5) | Area of the triangle: 8.75000 | Yes |

Test 13 (my own): I calculated 7 * 2.5 = 17.5, and half of that is 8.75 before running. I chose a decimal height to check that the triangle math is done in floating point and that the 0.5 is not turning into 0 or being rounded.

No errors came up, so there were no corrections to make. I did not change the code for testing, so nothing needed restoring. I recompiled and reran the final geometry.cpp before the final commit.

Explanation

Selection logic: After reading choice, an if / else if compares it to each menu number. Choice 1 runs the circle block, 2 the rectangle block, 3 the triangle block, and 4 the quit block. If none match, the last else prints the invalid-choice error. Only one block runs per program run.

radius * radius vs. radius ^ 2: In C++, ^ is the XOR operator, not an exponent. It doesn't square a number, and it doesn't even work on doubles. Multiplying radius * radius gives the square.

Why 0.5 and not 1 / 2: 1 / 2 is integer division, so it truncates to 0 and the area would always be 0. Using 0.5 makes the whole expression floating point, so the half is kept.

Where the checks happen: Right after reading the dimensions and before the area is calculated, I use if (value < 0) to print an error and skip the calculation. Zero is not less than 0, so it passes the check and gives an area of 0. For choice 4, the program prints "Goodbye." and never asks for dimensions or calculates an area.
