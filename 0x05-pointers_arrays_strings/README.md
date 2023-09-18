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

# 5.A Good Engineer


[5-rev_string](https://github.com/briviamoon/alx-low_level_programing/main/0x05-pointers_arrays_strings/5-rev_string.c)
 [5-rev_string.c](https://github.com/briviamoon/alx-low_level_programing/main/0x05-pointers_arrays_strings/5-rev_string.c)
A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

1. 'i' and 'j' are initialized before the loop:

2. i starts at 0, indicating the index of the first character in the string.

3. j starts at len - 1, indicating the index of the last character in the string. len - 1 because C strings are zero-based, so the last character is at len - 1 index.

4. The loop condition is i < j, which means the loop will continue as long as i is less than j. This condition ensures that we only swap characters until we reach the middle of the string. 

5. temp is a temporary variable used to store the character at position i. This is necessary to perform the swap without losing any characters.

6. s[i] is assigned the value of s[j], effectively swapping the character at position i with the character at position j. This is how the string is reversed.

7. s[j] is assigned the value of temp, which was the original character at position i. This completes the swap, and we've effectively reversed the characters.

8. After each iteration of the loop, i is incremented by 1 (i++), and j is decremented by 1 (j--). This means that on each iteration, we move one character closer to the middle of the string.

9. The loop continues until i is no longer less than j, which means we've swapped all the necessary characters to reverse the string. At this point, the string is fully reversed in place.

# 6.Half The Lies They Tell

[6-puts2.c](https://github.com/briviamoon/alx-low_level_programing//0x05-pointers_arrays_strings/6-puts2.c)
1. We use the variable i to iterate through the string.

2. Inside the while loop, we check if i is even using the condition if (i % 2 == 0). If i is even, we print the character at str[i].

3. We increment i in each iteration to move to the next character in the string.

# 7.Winning is only half of it

 [7-puts_half.c](https://github.com/briviamoon/alx-low_level_programing/0x05-pointers_arrays_strings/7-puts_half.c)
1. Declare integer variables index, len, and start to be used in the function.

2. Initialize len to 0 to count the number of characters in the input string str.

3. Use a while loop to calculate the length of the string by counting characters until reaching the null terminator '\0'.

4. Determine the value of start based on whether the length of the string is even or odd. If odd, set start to (len - 1) / 2; if even, set start to len / 2.

5. Use a for loop with the index variable to iterate from the start index to the end of the string (i.e., < len).

6. Inside the loop, use _putchar to print each character of the string.

7. After the loop, use _putchar to print a newline character '\n' to format the output.
