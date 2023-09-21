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

# 2.strncpy (string copy)
	```char *_strncpy(char *dest, char *src, int n);```
*```_strncpy``` is designed to copy a specified number of characters from the source string to the destination string, ensuring that the destination string is properly null-terminated.*

1. ```char *_strncpy(char *dest, char *src, int n)```: This function, named ```_strncpy```, takes three parameters: ```dest``` (the destination string where the copied content will be placed), ```src``` (the source string to copy from), and n (the maximum number of characters to copy).

2. ```char *home = dest;```: Declares a character pointer home and initializes it to point to the same location as dest. It will be used to keep track of the current position in the destination string.

3. ```int index;```: Declares an integer variable index without initializing it. This variable will serve as a loop counter.

4. for ```(index = 0; index < n; index++)```: Initiates a for loop that iterates from ```0``` to ```n - 1```

5. if ```(*src != '\0')```: Within the loop, it checks if the character pointed to by src is not the null terminator ```('\0')```, which indicates the end of the source string.

6. ```*home = *src;```: Copies the character pointed to by src into the memory location pointed to by home.

7. ``src++;``: Moves the src pointer to the next character in the source string.

8. ```else```: If the character pointed to by ```src``` is the null terminator ```('\0')```, it indicates the end of the source string. In this case, it does the following:

9. ```*home = '\0';```: Places the null terminator in the destination string to properly terminate it.

10. ```home++;```: Advances the home pointer to the next memory location in the destination string.

11. The ```for``` loop continues to copy characters from the source to the destination string until either n characters are copied or until the null terminator in the source string is encountered.

12. ```return (dest);```: After copying the specified number of characters or reaching the end of the source string, the function returns the dest pointer, which points to the beginning of the destination string.

# 3.strncmp (string compare)
	```int _strcmp(char *s1, char *s2);```
*```_strcmp``` function compares two strings character by character and returns the numerical difference between the first differing characters encountered. If the strings are identical, it returns 0.*

1. ```int _strcmp(char *s1, char *s2)```: This function, named ```_strcmp```, takes two arguments: ```s1``` (the first string to compare) and ```s2``` (the second string to compare). It returns an integer value representing the difference between the strings.

2. ```int difference = 0;```: Declares an integer variable difference and initializes it to ```0```. This variable will store the difference between characters when comparing the strings.

3. ```while (*s1 != '\0' && *s2 != '\0')```: Initiates a while loop that continues as long as neither of the strings reaches its null terminator ```('\0')```. This loop will compare the characters of the two strings.

4. ```if (*s1 != *s2)```: Within the loop, it checks if the characters pointed to by ```s1``` and ```s2``` are different.

5. ``difference = (*s1 - *s2);``: If the characters are different, it calculates the difference between the ```ASCII``` values of the characters pointed to by ```s1``` and ```s2``` and stores it in the difference variable.

6. ```return (difference);```: The function immediately returns the difference value and exits when it finds the first differing character in the two strings.

7. ```s1++; and s2++;```: If the characters are the same, it increments both ```s1``` and ```s2``` pointers to move to the next characters in the strings.

8. The loop continues until it reaches the end of either of the strings. If both strings are the same up to this point, the loop will continue until both strings have been fully compared.

9. ```return (difference);```: If the loop completes without finding any differing characters, it returns the difference value, which will be 0, indicating that both strings are identical.

# 4.I am kind of paranoid in reverse (reverse array of inagers)
	```void reverse_array(int *a, int n);```
*To reverse the order of elements in an integer array.*
1. ```int *a```: A pointer to the integer array to be reversed.

2. ```int n```: The number of elements in the array.

3. initialize start and end variables.

4. Use a for loop to swap elements between start and end.

5. Swap elements by using a temporary variable ```temp```.

6. Repeat the swapping until ```start``` is no longer less than ```end```.


# 5.Always Look Up
	```char *string_toupper(char *);```
*```string_toupper``` function itterates through a string character by character, checks if a character is lowercase, and if so, converts it to uppercase.*
1. ```char *ptr = str;```: Declares a character pointer ```ptr``` and initializes it to point to the same location as the input ```str```. This pointer will be used to iterate through and modify the string.

2. ```while (*ptr != '\0')```: Initiates a while loop that continues as long as the character pointed to by ptr is not the null terminator ```('\0')```. This loop will iterate through each character in the string.

3. ```if (*ptr >= 'a' && *ptr <= 'z')```: Within the loop, it checks if the character pointed to by ```ptr``` is a lowercase letter.

4. ```*ptr = *ptr + ('A' - 'a');```: If the character is lowercase, it converts it to uppercase by adding the difference between the ```ASCII``` values of ```'A'``` and ```'a'``` to the character. This effectively changes the character to its uppercase equivalent.

5. ```ptr++;```: Advances the ```ptr``` pointer to the next character in the string, allowing the loop to process the next character.

6. The loop continues until it reaches the end of the string.

7. ```return (str);```: After converting all applicable characters to uppercase, the function returns the str pointer, which now points to the modified string.

# 6.Expect the best. (Capitalize forst letter of each word)
	```char *cap_string(char *);```

**part-1 the ```cap_string``` function**
*It the first letter of each word in a string and leaves the rest of the letters in lowercase.*
1. char *str: A pointer to a character array (string) to be modified.

2. Initialize character pointer ```ptr``` to point to the input string && integer variable ```marker``` to ```1```.

3. Use a while loop to iterate through the string character by character until the null terminator is reached.

4. Checks if the character pointed to by ```ptr``` is a lowercase letter.

5. If it's a lowercase letter, check whether it's the first letter of a word (after a separator character) or not capitalized.

6. If the conditions are met, capitalize the letter using ASCII arithmetics.

7. Reset the marker back to 0 to indicate that a lowercase letter has been encountered.

8. Check if the character pointed to by ```ptr``` is a separator character, and If so, set ```marker``` to ```1```, anticipating the next letter to be the start of a new word.

9. The loop continues until it reaches the end of the string and Returns the ```str``` pointer, which now points to the modified string.

**part-2 ```separator``` function**
*Checks if a character is a separator character.*
1. Initialize an array ```separators``` containing common separator characters && Initialize an integer ```counter``` variable.

2. Use a for loop to iterate through the ```separators``` array.

3. Compare the character ```s``` with each character in the ```separators``` array.

4. If a match is found, the function returns 1, indicating that the character is a separator and If no match is found, it returns 0, indicating that the character is not a separator.

# 7.Mozart (Assign numbers to coresponding letters)
	```char *leet(char *str);```
*The ```leet``` function converts certain characters in a string to their "leet" or "1337" equivalents*
1. The function declares a character pointer ```ptr``` and initializes it to point to the input string.
2. It initializes two character arrays: ```letters``` containing letters to be replaced and ```leet``` containing their corresponding "leet" replacements.

3. It initializes an integer ```counter``` for iterating through ```letters```.

4. It uses a while loop to iterate through the string character by character until the null terminator is reached.

5. Within the loop, the function uses a ```for``` loop to iterate through the ```letters``` array, which contains the letters to be replaced.

6. The function Compares the character pointed to by ```ptr``` with each letter in the letters array.

7. If a match is found, the character pointed to by ```ptr``` is replaced with its corresponding "leet" equivalent from the ```leet``` array. The replacement is based on the position of the letter in the ```letters``` array.

8. After processing a character, the ```ptr``` pointer is incremented to move to the next character in the string.

9. The loops continue until the end of the string is reached, then the function ```returns``` the ```str``` pointer, which now points to the modified string with certain characters replaced by their "leet" equivalents.