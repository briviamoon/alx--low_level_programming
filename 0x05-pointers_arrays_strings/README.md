## 0x05-pointers arrays strings

# Objectives

1. What are pointers and how to use them.
2. What are arrays and how to use them.
3. What are the differences between pointers and arrays.
4. How to use strings and how to manipulate them.
5. Scope of variables.

# Requirements
**General**
1. Allowed editors: vi, vim, emacs.
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
3. All your files should end with a new line.
4. A README.md file, at the root of the folder of the project is mandatory.
5. Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
6. You are not allowed to use global variables.
7. No more than 5 functions per file.
8. You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden.
9. You are allowed to use _putchar.
10. You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account.
11. In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
12. The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.
13. Don’t forget to push your header file.

# 0.98 Battery.st
[0-reset_to_98.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/0-reset_to_98.c)
1. ```reset_to_98 function definition```.

2. Takes a single parameter n, which is a pointer to an integer.

3. Dereferences the pointer n using ```*n```.

4. Assigns the value 98 to the integer pointed to by ```n```.

5. Effectively resets the value of the integer to 98.

# 1.Don't swap horses in crossing a stream

[1-swap.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/1-swap.c)
1. ```swap_int function definition```.

2. Takes two parameters, a and b, which are pointers to integers.

3. Declares an integer variable temp to temporarily store a value.

4. Copies the value pointed to by a into temp using ```temp = *a```.

5. Assigns the value pointed to by b to a using *a = *b. This effectively swaps the values of a and b.

6. Assigns the value stored in temp (originally from a) to b using *b = temp. This completes the swap.

7. After the function is executed, the values of a and b have been swapped.

# 2.This report, by its very length, defends itself against the risk of being read

[2-strlen.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/2-strlen.c)
1. ```_strlen function definition```.

2. Takes a single parameter, s, which is a pointer to a character (a string).

3. Declares an integer variable len to store the length of the string.

4. Uses a while loop to iterate through the characters of the string.

5. Inside the loop, checks if the current character pointed to by s is not the null terminator '\0'.

6. If the character is not the null terminator, increments both s and len to move to the next character and increase the length.

7. Continues this process until the null terminator '\0' is encountered, indicating the end of the string.

8. Once the loop completes, the function returns the value of len, which represents the length of the string.

# 3.I do not fear computers. I fear the lack of them

[3-puts.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/3-puts.c)
1. ```_puts function definition```.

2. Takes a single parameter, ```str```, which is a pointer to a character (a string).

3. Uses a while loop to iterate through the characters of the string.

4. Inside the loop, checks if the current character pointed to by str is not the null terminator '\0'.

5. If the character is not the null terminator, it uses the _putchar function to print the character.

6. After printing the character, increments the str pointer to move to the next character in the string.

7. Continues this process until the null terminator '\0' is encountered, indicating the end of the string.

8. Once the loop completes, it uses _putchar to print a newline character '\n' to move to the next line, effectively printing the entire string with a newline at the end.

# 4.I can only go one way. I've not got a reverse gear

[4-print_rev.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/4-print_rev.c)
1. ```print_rev function definition```.

2. Takes a single parameter, s, which is a pointer to a character (a string).

3. Declares an integer variable len to store the length of the string and initializes it to 0.

4. Uses a while loop to calculate the length of the string by iterating through its characters.

5. Inside the loop, it checks if the current character ```s[len]``` is not the null terminator '\0'.

6. If the character is not the null terminator, it increments the len variable and moves to the next character in the string.

7. Once the loop completes, the len variable contains the length of the string.

8. Declares an integer variable i to use as an index for printing characters in reverse order.

9. Uses a for loop to print the characters of the string in reverse order.

10. Starting from i = len - 1 (the last character of the string), it decrements i until it reaches 0.

11. Inside the loop, it uses the _putchar function to print each character in reverse order.

12. After printing all characters in reverse, it uses _putchar to print a newline character '\n' to start a new line.

# 5.A Good Engineer

[5-rev_string.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/5-rev_string.c)
A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
1. ```i``` and ```j``` are initialized before the loop:

2. ```i``` starts at ```0```, indicating the index of the first character in the string.

3. ```j``` starts at ```len - 1```, indicating the index of the last character in the string. ```len - 1``` because C strings are zero-based, so the last character is at ```len - 1``` index.

4. The loop condition is ```i < j```, which means the loop will continue as long as ```i``` is less than ```j```. This condition ensures that we only swap characters until we reach the middle of the string. 

5. ```temp``` is a temporary variable used to store the character at position ```i```. This is necessary to perform the swap without losing any characters.

6. ```s[i]``` is assigned the value of ```s[j]```, effectively swapping the character at position ```i``` with the character at position ```j```. This is how the string is reversed.

7. ```s[j]``` is assigned the value of temp, which was the original character at position ```i```. This completes the swap, and we've effectively reversed the characters.

8. After each iteration of the loop, ```i``` is incremented by 1 ``` (i++)```, and j is decremented by 1 ```(j--)```. This means that on each iteration, we move one character closer to the middle of the string.

9. The loop continues until i is no longer less than j, which means we've swapped all the necessary characters to reverse the string. At this point, the string is fully reversed in place.

# 6.Half The Lies They Tell

[6-puts2.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/6-puts2.c)
1. We use the variable i to iterate through the string.

2. Inside the while loop, we check if i is even using the condition ```if (i % 2 == 0)```. If i is even, we print the character at ```str[i]```.

3. We increment ```i``` in each iteration to move to the next character in the string.

# 7.Winning is only half of it

 [7-puts_half.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/7-puts_half.c)
1. Declare integer variables ```index, len```, and start to be used in the function.

2. Initialize len to 0 to count the number of characters in the input string ```str```.

3. Use a while loop to calculate the length of the string by counting characters until reaching the null terminator '\0'.

4. Determine the value of start based on whether the length of the string is even or odd. If odd, set ```start``` to ``(len + 1) / 2;``` if even, set ```start``` to len / 2.

5. Use a for loop with the index variable to iterate from the ```start``` index to the end of the string (i.e., < len).

6. Inside the loop, use _putchar to print each character of the string.

7. After the loop, ```use _putchar``` to print a newline character ```'\n'`` to format the output.

# 8.Arrays are not Pointers.

 [8-print_array.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/8-print_array.c)
1. The print_array function is defined with two parameters: a, which is a pointer to an integer array, and n, which is the number of elements to print.

2. Inside the function, an integer variable ```index``` is declared to be used as a loop counter.

3. A for loop is used to iterate through the elements of the array from ```index 0 to n - 1```.

4. Inside the loop, a conditional statement checks if the current index is equal to n - 1, indicating the last element of the array.

5. If the current index is the last element, the function prints the element followed by a newline character using ```printf("%d\n", a[index])```.

6. If the current index is not the last element, the function prints the element followed by a comma and space using ```printf("%d, ", a[index])```.

7. The loop continues until all n elements have been printed as specified.

8. The function correctly formats the output with commas, spaces, and a newline character to represent the array's elements.

# 9.strcpy

[9-strcpy.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/9-strcpy.c)
1. The ```_strcpy();``` function is defined with two parameters: dest, which is the destination of the copied string, and src, which is the source of the copied string.

2. A pointer variable home is declared and initialized with the value of dest. This pointer will be used to store the original address of the destination buffer and will be returned at the end.

3. Using a while loop, the function begins copying characters from src to dest. The loop continues until it reaches the null terminator ```'\0'``` at the end of the source string.

4. Inside the loop, the current character from src is copied to the current position in dest using ```*dest = *src```. This effectively copies characters one by one from the source string to the destination buffer.

5. After copying a character, both dest and src pointers are incremented to point to the next character in their respective strings.

6. The loop continues until the entire string has been copied from ```src``` to ```dest```.

7. Once all characters have been copied, a null terminator ```'\0'``` is added to the end of the dest buffer to ensure that it forms a valid C string.

8. Finally, the function returns the home pointer, which points to the beginning of the copied string in the dest buffer.

# 101-Keygen

[101-keygen.c](https://github.com/briviamoon/alx-low_level_programing/blob/master/0x05-pointers_arrays_strings/101-keygen.c)
**Part 1**
```char randomChar();```
**gets a random character**
1. The bin array contains a set of characters from which the random character will be selected.
2. This character set includes lowercase and uppercase letters, digits, and a variety of special characters.
3. ```const int binLength = sizeof(bin) - 1;```
    calculates the length of the character set (bin).
4. It subtracts 1 from the size of the array to account for the null terminator ```'\0'``` at the end of the string.
5. ```rand()```
    is a standard C library function that generates pseudo-random integers.
6. ```rand() % binLength```
    calculates a random integer within the range of ```0 to (binLength - 1.)```
7. This random integer is used as an index to select a character from the bin array.
8. The result of ```c``` bin[rand() % binLength] 
    is used as an index to access a character from the bin array.
9. The selected character is then returned as the result of the randomChar function.

**Part 2**
```void generator(char *password, int length);```
**generates random password**
1. ```char *password``` This is a pointer to a character array or value within the array where the generated password will be stored.
2. ```int length``` parameter specifies the desired length of the generated password.
3. Uses the for loop to run ```from i = 0 to i < length```, where i is a loop counter in order to get that random characters asigned one by on.
4. the ```randomChar()``` function is called within th loop to generate a random character.
5. The character is then assigned to the i-th position in the password array, bulding our new random password.
