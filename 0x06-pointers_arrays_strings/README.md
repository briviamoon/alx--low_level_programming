## 0x06-pointers_arrays_strings

# Requirements
**General**
1. Allowed editors: vi, vim, emacs.
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89.```
3. All your files should end with a new line.
4. A README.md file, at the root of the folder of the project is mandatory.
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
6. You are not allowed to use global variables.
7. No more than 5 functions per file.
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden.
9. You are allowed to use _putchar.
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account.
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your .12. repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
13. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
14. Don’t forget to push your header file.

# 0.strcat
***```char *_strcat(char *dest, char *src);```***
1. Function Definition: Your code includes a function definition for ```_strcat``` that takes two string pointers as arguments ```(dest and src)``` and returns a pointer to the concatenated string.

2. Initialization: You initialize a pointer ```final``` to the ```dest``` string, which will be used to traverse and append characters to the end of ```dest```.

3. Find End of ```dest```: You use a while loop to traverse the ```dest``` string using the ```final``` pointer until the null byte ('\0') at the end of the string is reached. This loop ensures that ```final``` points to the end of ```dest``` after the loop execution.

4. Copy Characters from ```src``` to ```dest```: You use another while loop to copy characters from the ```src``` string to the ```dest``` string, starting from where ```final``` is pointing. This loop continues until the null byte ('\0') at the end of ```src``` is reached. This effectively appends ```src``` to the end of ```dest```.

5. Null-Terminate: After copying all characters from ```src``` to ```dest```, you add a null byte ('\0') to terminate the concatenated string. This ensures that the resulting string is properly null-terminated.

6. Return Value: You return a pointer to the beginning of the ```dest``` string, which is now the concatenated string containing both ```dest``` and ```src```.

7. Your ```_strcat``` function correctly concatenates two strings, and the returned pointer points to the beginning of the resulting concatenated string.

# 1.strncat
***```char *_strncat(char *dest, char *src, int n);```***
1. Initialize two pointers, ```home``` and ```away```, to the start of the ```dest``` and ```src``` strings, respectively.

2. Iterate through the ```dest``` string using the ```home``` pointer until the null terminator ('\0') is reached. This finds the end of the ```dest``` string.

3. In a loop, while characters in the ```src``` string (pointed to by ```away```) are not null ('\0') and n is greater than 0 (indicating there are more bytes to concatenate):

4. Copy the character pointed to by ```away``` to the position pointed to by ```home``` (concatenation).

5. Increment both ```home``` and ```away``` pointers to move to the next characters.

6. Decrement n to keep track of the remaining bytes to concatenate.
After the loop, null-terminate the resulting concatenated string by placing a null byte ```('\0')``` at the end of the ```dest``` string, where ```home``` is now pointing.

7. Finally, return a pointer to the original starting position of the ```dest``` string.

In summary, the _strncat function appends characters from the ```src``` string to the end of the ```dest``` string, limiting the concatenation to a maximum of n bytes. It ensures that the resulting string is null-terminated and returns a pointer to the modified ```dest``` string.