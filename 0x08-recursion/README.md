# Requirements

## General

1. Allowed editors: vi, vim, emacs
2. All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options ```-Wall -Werror -Wextra -pedantic -std=gnu89```
3. All your files should end with a new line
4. A``` README.md ```file, at the root of the folder of the project is mandatory
5. Your code should use the ```Betty style.``` It will be checked using ```betty-style.pl and betty-doc.pl```
6. You are not allowed to use global variables
7. No more than 5 functions per file
8. You are not allowed to use the standard library. Any use of functions like ```printf```, ```puts```, etc… is forbidden
9. You are allowed to use ```_putchar```
10. You don’t have to push```_putchar.c```, we will use our file. If you do it won’t be taken into account
11. In the following examples, the ```main.c``` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our ```main.c``` files might be different from the one shown in the examples
12. The prototypes of all your functions and the prototype of the function ```_putchar``` should be included in your header file called ```main.h```
13. Don’t forget to push your ```header``` file
14. You are not allowed to use any kind of loops
15. You are not allowed to use ```static``` variables

### 0.She locked away a secret

*Write a function that prints a string, followed by a new line.*
```void _puts_recursion(char *s);```

1. ```_puts_recursion``` prints a string character by character.

2. It uses recursion to go through the string.

3. It starts with the first character and prints it.

4. Then, it calls itself for the next character.

5. This process continues until it reaches the end of the string.

6. After printing each character, it adds a newline for formatting.

### 1.Why is it so important to dream?

*Write a function that prints a string in reverse.*
```void _print_rev_recursion(char *s);```

1. ```_print_rev_recursion``` reverses and prints a string character by character.

2. It uses recursion to process the string.

3. It checks if the current character is the null terminator ```'\0'```.

4. If it's not the null terminator, it calls itself for the next character.

5. This recursive call effectively reverses the order of characters.

6. After reaching the end of the string, it starts printing characters in reverse order.

7. It adds a newline character to format the reversed string.

### 2.Dreams feel real while we're in them

*Write a function that returns the length of a string.*
```int _strlen_recursion(char *s);```

1. ```_strlen_recursion``` calculates the length of a string using recursion.

2. It checks if the current character is the null terminator ```'\0'```.

3. If it's the null terminator, it returns 0, indicating the end of the string.

4. If it's not the null terminator, it adds 1 to the result of ```_strlen_recursion``` for the next character.

5. This recursive process continues until it reaches the end of the string, effectively counting its length.

6. It returns the total length of the string as an integer.

### 3.You mustn't be afraid to dream a little bigger

*Write a function that returns the factorial of a given number.*
```int factorial(int n);```

1. ```factorial``` calculates the factorial of a non-negative integer n.

2. It checks if ```n``` is equal to ```0```, in which case it ```returns 1``` because the factorial of ```0``` is defined as ```1```.

3. If ```n``` is negative, it ```returns -1``` to indicate an error condition (negative factorial is undefined).

4. For positive values of ```n```, it calculates the factorial by multiplying ```n``` with the factorial of ```n - 1```, using recursion.

5. This recursive process continues until it reaches the base case ```(n = 0)```, and the factorial is calculated.

6. It returns the factorial as an integer.

### 4.Once an idea has taken hold of the brain it's almost impossible to eradicate

*Write a function that returns the value of x raised to the power of y.*
```int _pow_recursion(int x, int y);```

1. ```_pow_recursion``` calculates the power of an integer ```x``` raised to a non-negative integer ```y```.

2. It checks if ```y``` is equal to ```0```, in which case it ```returns 1``` because any number raised to the power of ```0``` is ```1```.

3. If ```y``` is negative, it ```returns -1``` to indicate an error condition (negative exponents are not supported).

4. For positive values of ```y```, it calculates the power by multiplying ```x``` with the result of ```_pow_recursion(x, y - 1)```, using recursion.

5. This recursive process continues until it reaches the base case ```(y = 0)```, and the power is calculated.

6. It returns the result as an integer.

### 5.Your subconscious is looking for the dreamer

*Write a function that returns the natural square root of a number.*
```int _sqrt_recursion(int n);```

**For _sqrt_recursion:**

1. ```_sqrt_recursion``` calculates the integer square root of a non-negative integer ```n```.

2. It checks if ```n``` is negative, in which case it returns ```-1``` to indicate an error.

3. If ```n``` is ```0``` or ```1```, it returns ```n``` itself since the square root of ```0``` or ```1``` is the number itself.

4. For other positive values of ```n```, it calls the ```actual_sqrt``` helper function to find the actual square root.

**For actual_sqrt:**

1. ```actual_sqrt``` is a recursive helper function for ```_sqrt_recursion```.

2. It calculates the square root by checking if ```rand * rand``` is equal to ```n```.

3. If ```rand * rand``` is equal to ```n```, it returns ```rand```, which is the square root.

4. If ```rand * rand``` is ```greater``` than ```n```, it means there's no exact integer square root, so it ```returns -1```.

5. If neither of the above conditions is met, it continues the search by recursively calling itself with ```rand + 1```.

### 6.Inception. Is it possible?

*Write a function that returns 1 if the input integer is a prime number, otherwise return 0.*
```int is_prime_number(int n);```

**For is_prime_number:**

1. ```is_prime_number``` checks if an integer``` n ```is a prime number.

2. It first checks if``` n ```is less than 2 (since prime numbers start from 2), and if so, it returns ```0``` indicating that it's not a prime.

For``` n ```greater than or equal to 2, it calls the ```prime_checker``` helper function to check for primality.

**For prime_checker:**

1. ```prime_checker``` is a recursive helper function for ```is_prime_number```.

2. It checks if the square of rand is greater than ```n```, which means that``` n ```is prime, and it returns ```1```.

3. If``` n ```is divisible by rand (i.e., ```n % rand == 0```), it returns ```0```, indicating that``` n ```is not prime.

4. If neither of the above conditions is met, it continues the search by recursively calling itself with rand + 1.

### 7.They say we only use a fraction of our brain's true potential

*Write a function that returns 1 if a string is a palindrome and 0 if not.*
```int is_palindrome(char *s);```

**For is_palindrome:**

1. ```is_palindrome``` checks if a given string s is a palindrome.

2. It first calculates the length of the string using the ```_strlen_recursion``` helper function.

3. Then, it calls ```palindrome_check``` to determine if the string is a palindrome, passing the ```start``` and end indices.

**For palindrome_check:**

1. ```palindrome_check``` checks if a portion of the string s between ```start``` and end is a palindrome.

2. If ```start``` is greater than or equal to end, it returns ```1```, indicating that the portion is a palindrome.

3. If the characters at ```start``` and end positions don't match, it returns ```0```, indicating that it's not a palindrome.

4. Otherwise, it recursively calls itself with ```start + 1``` and ```end - 1``` to continue checking.

**For _strlen_recursion:**

1. ```_strlen_recursion``` calculates the length of a string ```s``` using recursion.

2. If the current character is the null terminator ```'\0'```, it returns ```0``` (end of the string).

3. Otherwise, it adds ```1``` to the ```length``` and recursively calls itself for the next character.
