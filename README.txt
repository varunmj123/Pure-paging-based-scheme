
--------------------------- PART 1 - MEMORY MANAGEMENT - PAGING -------------------------------

		------------------- Read this for the main method -------------------

The program takes the following input values from an input file in the same directory (named 'part1input.txt'):
1) n - the n lowest significant bits that represent the offset
2) m - the next m bits that represent the page number; assuming that n+m is always 16
3) v1 to vn - the virtual addresses that need to be mapped to a page number and offset (the input file currently holds 8 virtual addresses)

The program makes use of file I/O techniques to obtain the required data from the given input file. It then performs bitwise operations based on the retrieved values to obtain the required values of page number and offset for each virtual address provided.

		-------------------- Read this for console output -------------------

Appropriate and explanatory messages are printed on the console for easy understanding of the output. The beginning and end of the program are marked by the messages "PROGRAM STARTING" and "GOODBYE" respectively.

----------------------------------------------------------------------------------------------------------

------------------------------- BUILD AND EXECUTION INSTRUCTIONS ----------------------------------------

Step 1: Install gcc
$ sudo apt-get install build-essential

Step 2: Go to the folder where mini-project3.c and part1input.txt is saved
$ cd /home/YOUR NAME/Downloads/P3/Part 1

Step3: Make an executable file for the program using the gcc command called executable-file-name
gcc mini-projext3.c -o executable-file-name

Step 4: Compile mini-project3.c using the cc command 
cc mini-project3.c -0 scheduler

Step 5: If no errors occur during compilation, use ./ to run the code
./mini-project3

Step 6: Once the program initiates, it will present the user with the following output:
PROGRAM STARTING

Step 7: After the paging process has completed the program will give the following output:
Virtual Address, Page number and Offset in the following syntax:
The virtual address v_ is in page number ____ and offset ____

Step 8: The program ends with the following output:
GOODBYE

Special Note: The project directory also includes a pre-made executable file which can be used to run the program directly using the command ./mini-project3

----------------------------------------------------------------------------------------------------------
