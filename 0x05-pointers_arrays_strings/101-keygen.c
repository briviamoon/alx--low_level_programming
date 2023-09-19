#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *randomChar - generates a random character.
 *generator - geerates a string from the characters.
 *@password: the  argument pointing to the password string variable.
 *@length: the argument dictating length of password.
 *main(void) - function to print random password.
 */

char randomChar();
void generator(char *password, int length);

int main(void)
{
    srand(time(NULL));

    int passLength = 8;
    char password[passLength + 1];

    generator(password, passLength);
    printf("%s", password);
    return (0);
}

char randomChar(void)
{
    const char bin[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+=-[]{}|;:,.<>?";
    const int binLength = sizeof(bin) - 1;

    return bin[rand() % binLength];
}

void generator(char *password, int length)
{
    for (int i = 0; i < length; i++) {
        password[i] = randomChar();
    }
    password[length] = '\0';
}