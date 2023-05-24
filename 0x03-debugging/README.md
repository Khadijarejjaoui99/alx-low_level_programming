Those files were created based on the followig tasks:
|Task Number|Description|Expected Output|
|---------|-----------|
|Task-0|create a file named 0-main.c. This file must test that the function positive_or_negative() gives the correct output when given a case of 0. <br> - Compile using the following command: gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main|0 is zero|
|Task-1|Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.<br>- Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code. <br>- You do not have to compile with -Wall -Werror -Wextra -pedantic for this task. <br> compile using: gcc -std=gnu89 1-main.c -o 1-main|./1-main should give <br> Infinite loop incoming :( <br>Infinite loop avoided! \o/<br> and wc -l 1-main.c is <br> 24 1-main.c|
