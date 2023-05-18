This repository contains all C language project.

C coding style: <a href="https://github.com/holbertonschool/Betty/wiki" traget="_blank"> betty-style</a>

Text editor: Vim
 
<h2>0x00-hello_world </h2>

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

<h3>Advanced Tasks</h3>

|File Name|Description|
|---------|-----------|
|100-intel|A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.<br> - The C file name will be saved in the variable $CFILE (For example, export CFILE=main.c)<br>- The output file will be named the same as the C file, but with the extension .s instead of .c. (Example: if the C file is main.c, the output file should be main.s)|
|101-quote.c| A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. <br> - Without using any functions listed in the NAME section of the man (3) printf or man (3) puts <br> - The program returns 1 <br> - The program compiles without any warnings when using the -Wall gcc option|
