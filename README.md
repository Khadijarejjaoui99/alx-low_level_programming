This repository contains all C language project.

## Compiler

- GCC (GNU Compiler Collection): GCC is a popular open-source compiler used for compiling and running programs written in various programming languages, including C, C++, and Fortran. It is known for its robustness, optimization capabilities, and wide platform support.

## Coding style

- Projects follow the <a href="https://github.com/holbertonschool/Betty/wiki" traget="_blank">Betty coding style</a>

## Text Editor

- Vim: Vim is a highly configurable text editor known for its powerful editing capabilities and efficient workflow. It is popular among developers for its modal editing, which allows for fast and precise text manipulation. Vim offers a wide range of features and plugins, making it suitable for various programming and scripting tasks.

## Directories and their contents

<h3>0x00-hello_world </h3>

This directory contains the following files:
|File Name|Description|
|---------|-----------|
|0-preprocessor|A script that runs a C file through the preprocessor and save the result into another file.<br> - The C file name should be saved in the variable $CFILE (For example, export CFILE=main.c)<br> - The output should be saved in the file c|
|1-compiler|A script that compiles a C file but does not link. <br> - The C file name should be saved in the variable $CFILE (For example, export CFILE=main.c) <br> - The output file should be named the same as the C file, but with the extension .o instead of .c (Example: if the C file is main.c, the output file should be main.o)|
|2-assembler|A script that generates the assembly code of a C code and save it in an output file.<br>- The C file name will be saved in the variable $CFILE (For example, export CFILE=main.c)<br>- The output file will be named the same as the C file, but with the extension .s instead of .c. (Example: if the C file is main.c, the output file should be main.s)|
|3-name|A script that compiles a C file and creates an executable named cisfun. <br> - The C file name will be saved in the variable $CFILE|
|4-puts.c|A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. <br> - Using  the function puts. <br> - Without using printf. <br> - The program ends with the value 0.|
|5-printf.c|C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.<br> - Using  the function printf. <br> - Without using puts. <br> - The program ends with the value 0. <br> - The program gets compiled without warning when using the -Wall gcc option.|
|6-size.c|A C program that prints the size of various types on the computer it is compiled and run on.|

<h4>Advanced Tasks</h4>

|File Name|Description|
|---------|-----------|
|100-intel|A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.<br> - The C file name will be saved in the variable $CFILE (For example, export CFILE=main.c)<br>- The output file will be named the same as the C file, but with the extension .s instead of .c. (Example: if the C file is main.c, the output file should be main.s)|
|101-quote.c| A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. <br> - Without using any functions listed in the NAME section of the man (3) printf or man (3) puts <br> - The program returns 1 <br> - The program compiles without any warnings when using the -Wall gcc option|

<h3>0x01-variables_if_else_while</h3>

This directory contains the following files:
|File Name|Description|
|---------|-----------|
|0-positive_or_negative.c|This program will assign a random number to the variable n each time it is executed. And it prints  whether the number stored in the variable n is positive or negative. <br> - The output of this program is: <br> The number, followed by <br> * if the number is greater than 0: is positive <br> * if the number is 0: is zero <br> * if the number is less than 0: is negative <br> followed by a new line <br> Example output: -520693284 is negative|
|1-last_digit.c|This program will assign a random number to the variable n each time it is executed. it prints he last digit of the number stored in the variable n. <br> - The output of this program is: <br> The string Last digit of, followed by n, followed by the string is, followed by <br> * if the last digit of n is greater than 5: the string and is greater than 5 <br> * if the last digit of n is 0: the string and is 0 <br> * if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0 <br> followed by a new line <br>Example output: Last digit of 629438752 is 2 and is less than 6 and not 0|
|2-print_alphabet.c|A program that prints the alphabet in lowercase, followed by a new line. <br> Task: <br> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) <br> - All your code should be in the main function <br> - You can only use putchar twice in your code <br> Output: abcdefghijklmnopqrstuvwxyz|
|3-print_alphabets.c|A  program that prints the alphabet in lowercase, and then in uppercase, followed by a new line. <br> Task: <br> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) <br> - All your code should be in the main function <br> - You can only use putchar three times in your code <br>Output: abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ|
|4-print_alphabt.c|A  program that prints the alphabet in lowercase(except q and e) using putchar, followed by a new line. <br> Output: abcdfghijklmnoprstuvwxyz|
|5-print_numbers.c|A  program that prints all single digit numbers of base 10 starting from 0, followed by a new line. <br> Output: 0123456789|
|6-print_numberz.c|A program that prints all single digit numbers of base 10 starting from 0, followed by a new line.(Without using any variable of type char, using  the putchar function)<br> Output: 0123456789|
|7-print_tebahpla.c|A program that prints the lowercase alphabet in reverse, followed by a new line.(Using only putchar) <br> zyxwvutsrqponmlkjihgfedcba|
|8-print_base16.c|A program that prints all the numbers of base 16 in lowercase, followed by a new line. (Using putchar three times in your code) <br> Output: 0123456789abcdef|
|9-print_comb.c|A program that prints all possible combinations of single-digit numbers. <br> - Numbers are  separated by , followed by a space. <br> - Numbers are printed in ascending order.<br> - Maximum use of putchat is 4 times. <br> - Not allowed to use char data type <br> Output: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 |

<h4>Advanced Tasks</h4>

|File Name|Description|
|---------|-----------|
|100-print_comb3.c| A  program that prints all possible different combinations of two digits. <br> - Task: <br> - Numbers must be separated by , followed by a space <br> - The two digits must be different <br> - 01 and 10 are considered the same combination of the two digits 0 and 1 <br> Print only the smallest combination of two digits <br> - Numbers should be printed in ascending order, with two digits <br> - - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) <br> - You can only use putchar five times maximum in your code <br> - You are not allowed to use any variable of type char<br> - All your code should be in the main function <br> - Output: 01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89|
|101-print_comb4.c|A program that prints all possible different combinations of three digits.<br> - Task: <br> - Numbers must be separated by , followed by a space <br> - The three digits must be different <br> - 012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2 <br> - Print only the smallest combination of three digits <br> - Numbers should be printed in ascending order, with three digits <br> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) <br> - You can only use putchar six times maximum in your code <br> - You are not allowed to use any variable of type char <br> - All your code should be in the main function|
|102-print_comb5.c|A program that prints all possible combinations of two two-digit numbers.<br> - Task:<br>- The numbers should range from 0 to 99 <br> - The two numbers should be separated by a space <br> - All numbers should be printed with two digits. 1 should be printed as 01 <br> The combination of numbers must be separated by comma, followed by a space <br> - The combinations of numbers should be printed in ascending order <br> - 00 01 and 01 00 are considered as the same combination of the numbers 0 and 1 <br> - You can only use the putchar function (every other function (printf, puts, etc…) is forbidden) <br> - You can only use putchar eight times maximum in your code <br> - You are not allowed to use any variable of type char <br> - All your code should be in the main function <br> Output: 00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99|
