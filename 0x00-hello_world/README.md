This directory contains the following files:
|File Name|Description|
|---------|-----------|
|0-preprocessor|A script that runs a C file through the preprocessor and save the result into another file.<br> - The C file name should be saved in the variable $CFILE (For example, export CFILE=main.c)<br> - The output should be saved in the file c|
|1-compiler|A script that compiles a C file but does not link. <br> - The C file name should be saved in the variable $CFILE (For example, export CFILE=main.c) <br> - The output file should be named the same as the C file, but with the extension .o instead of .c (Example: if the C file is main.c, the output file should be main.o)|
|2-assembler|A script that generates the assembly code of a C code and save it in an output file.<br>- The C file name will be saved in the variable $CFILE (For example, export CFILE=main.c)<br>- The output file should be named the same as the C file, but with the extension .s instead of .c. (Example: if the C file is main.c, the output file should be main.s)|
|3-name|A script that compiles a C file and creates an executable named cisfun. <br> - The C file name will be saved in the variable $CFILE|
|4-puts.c|A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. <br> - Using  the function puts. <br> - Without using printf. <br> - The program ends with the value 0.|

