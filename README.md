# Ramadan Fanoos Drawing Program

This is a C++ program that draws a Ramadan Fanoos (lantern) in the console. The program uses ASCII art to create the drawing.

## How it works

The program consists of several functions that draw different parts of the Fanoos:

- start(): This function prompts the user to enter a number 'n' that is divisible by 4 and greater than or equal to 24. The number 'n' determines the size of the Fanoos.
  <br>

- DrawTopPart(int n, int check = 1): This function draws the top part of the Fanoos.
  <br>

- DrawMiddlePart(int n, int check = 1): This function draws the middle part of the Fanoos, including the text "RAMADAN KAREEM".
  <br>

- DrawBottomPart(int n, int check = 1): This function draws the bottom part of the Fanoos.
  <br>

- draw_fanoos(): This function calls the above functions to draw the complete Fanoos. It also includes some animation effects.
  <br>

- End(string s): This function displays a final message when the program ends.
  <br>

- The main() function initializes the program, calls draw_fanoos(), and asks the user if they want to draw another Fanoos.
  <br>

## Prerequisites

- A C++ compiler installed on your Windows

## How to run

To run the program, compile it with a C++ compiler and run the resulting executable. When prompted, enter a number that is divisible by 4 and greater than or equal to 24. The program will then draw a Fanoos of the corresponding size. After the Fanoos is drawn, you can choose to draw another one or exit the program.

## This is how the program looks like when it runs:

https://github.com/Anwar-Rizk/Fanoos-Ramadan-2022/assets/74681273/3b1aaf32-9684-4be1-b20d-914554e3a791
