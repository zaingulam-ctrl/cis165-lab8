# AI Reflection
 
**Tools:** I used Claude  to help me write a first version of geometry.cpp and to draft my README. I then compiled, ran, and read through the code myself.
 
**One decision:** The AI's code checks the dimensions after reading them and uses an `if / else if` chain with named constants for the menu choices (`CIRCLE`, `RECTANGLE`, and so on) instead of bare numbers. I kept the named constants because they make the choice logic easier to read. I also kept the negative checks inside each choice so that nothing is calculated before the check passes.
 
**A specific check:** For choice 3, I tried base 7 and height 2.5. I worked out 7 * 2.5 * 0.5 = 8.75 first, and the program printed 8.75000, which matched. This showed that the triangle uses floating-point math, since integer division would have given 0. I also ran radius 2, and the program printed 12.56636, matching 3.14159 * 2 * 2.
 
**Learning:** I can now build a menu with if / else if / else and validate input before calculating. I still need to practice choosing a good output precision and thinking of tricky test cases without help.
 
