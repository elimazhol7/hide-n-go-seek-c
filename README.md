Hide 'n' Go Seek
---------------------------------------------------------
This program allows a user to search for a specific name
within a file that contains a list of names (one per line).
The search is **case-insensitive**, and the program will
display the position of the found name along with its
ordinal suffix (e.g., 1st, 2nd, 3rd).

If the file cannot be opened, the user will be prompted to
enter another filename. If the name is not found in the
file, a message will be displayed stating that.

The program does **not** load all the names into memory,
making it efficient even for very large files.

---------------------------------------------------------
HOW TO COMPILE
---------------------------------------------------------
Using a terminal or command prompt, compile all three
program files together:

    g++ main.cpp namesearch.cpp -o namesearch.out

If successful, you’ll get an executable file named
`namesearch.out`.

---------------------------------------------------------
HOW TO RUN
---------------------------------------------------------
Run the program in the terminal:

    ./namesearch.out

When prompted:
1. Enter the name of your data file (e.g., names.txt).
2. Enter the name you wish to search for (case-insensitive).

---------------------------------------------------------
