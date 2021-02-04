/*
** EPITECH PROJECT, 2020
** mylib.h
** File description:
** mylib
*/

#ifndef MYLIB_H_
#define MYLIB_H_
//Defines:
    #define RED   "\x1B[31m"
    #define GRN   "\x1B[32m"
    #define YEL   "\x1B[33m"
    #define BLU   "\x1B[34m"
    #define MAG   "\x1B[35m"
    #define CYN   "\x1B[36m"
    #define WHT   "\x1B[37m"
    #define RESET "\x1B[0m"

    #define BUFF_SIZE   2048
//Includes:
    #include <SFML/Graphics.h>
//Prototypes:
    //my_ctype

        /// \brief Check if a character is alpha-numerical
        /// \param character The character to be tested
        /// \return {1} - If the character is alpha-numerical,
        /// {0} - If the character is not alpha-numerical
        int my_isalnum(int character);

        /// \brief Check if a character is alphabetical
        /// \param character The character to be tested
        /// \return {1} - If the character is alphabetical,
        /// {0} - If the character is not alphabetical
        int my_isalpha(int character);

        /// \brief Check if a character is blank or not
        /// \param character The character to be tested
        /// \return {1} - If the character is blank,
        /// {0} - If the character is not blank
        int my_isblank(int character);

        /// \brief Check if a character is a control character
        /// \param character The character to be tested
        /// \return {1} - If the character is a control character,
        /// {0} - If the character is not a control character
        int my_iscntrl(int character);

        /// \brief Check if a character is a number
        /// \param character The character to be tested
        /// \return {1} - If the character is a number,
        /// {0} - If the character is not a number
        int my_isdigit(int character);

        /// \brief Check if a character possesses a graphical representation
        /// \param character The character to be tested
        /// \return {1} - If the character possesses a graphical representation,
        /// {0} - If the character do not possesses a graphical representation
        int my_isgraph(int character);

        /// \brief Check if a character is a lowercase letter
        /// \param character The character to be tested
        /// \return {1} - If the character is a lowercase letter,
        /// {0} - If the character is not a lowercase letter
        int my_islower(int character);

        /// \brief Check if a character is printable
        /// \param character The character to be tested
        /// \return {1} - If the character is printable,
        /// {0} - If the character is not printable
        int my_isprint(int character);

        /// \brief Check if a character is a punctuation character
        /// \param character The character to be tested
        /// \return {1} - If the character is a punctuation character,
        /// {0} - If the character is not a punctuation character
        int my_ispunct(int character);

        /// \brief Check if a character is a space character
        /// \param character The character to be tested
        /// \return {1} - If the character is a space character,
        /// {0} - If the character is not a space character
        int my_isspace(int character);

        /// \brief Check if a character is a uppercase character
        /// \param character The character to be tested
        /// \return {1} - If the character is a uppercase character,
        /// {0} - If the character is not a uppercase character
        int my_isupper(int character);

        /// \brief Check if a character is a hexadecimal number
        /// \param character The character to be tested
        /// \return {1} - If the character is a hexadecimal number,
        /// {0} - If the character is not a hexadecimal number
        int my_isxdigit(int character);

        /// \brief Transform a uppercase character to a lowercase character
        /// \param character The character to be transformed
        /// \return {character} transformed if uppercase, else {character}
        int my_tolower(int character);

        /// \brief Transform a lowercase character to a uppercase character
        /// \param character The character to be transformed
        /// \return {character} transformed if lowercase, else {character}
        int my_toupper(int character);

    //my_math

        /// \brief Check if a number is negative
        /// \param nb The number to be tested
        /// \return {1} - If the character is negative,
        /// {0} - If the character is not negative
        int my_isneg(int nb);

        /// \brief Check if a number is prime
        /// \param nb The number to be tested
        /// \return {1} - If the character is prime,
        /// {0} - If the character is not prime
        int my_isprime(int nb);

        /// \brief Return the sup prime of a number
        /// \param nb The number to be tested
        /// \return Return the sup prime of {nb}
        int my_sprime(int nb);

        /// \brief Return the square root of a number
        /// \param nb The number for wich to determine the square root
        /// \return Return the square root of {nb}
        int my_sqrt(int nb);

    //my_stdio

        /// \brief Write formated output to stdout
        /// Added %w to print on the error output.
        /// \param str The sentence need to be formated
        void my_printf(char *str, ...);

        /// \brief Write a character to stdout
        /// \param c The character to be printed
        void my_putchar(char c);

        /// \brief Write a number to stdout
        /// \param nb The number to be printed
        void my_putnbr(int nb);

        /// \brief Write a string to stdout
        /// \param str The string to be printed
        int my_putstr(char const *str);

        /// \brief Reverse a string
        /// \param str The string to be reversed
        /// \return Return the reversed string
        char *my_revstr(char *str);

    //my_stdlib

        /// \brief Convert a string in a double
        /// \param str The string to be Converted
        /// \return Return a double of the string
        double my_atof(const char *str);

        /// \brief Convert a string in a int
        /// \param str The string to be Converted
        /// \return Return a int of the string
        int my_atoi(char const *str);

        /// \brief Convert a string in a long
        /// \param str The string to be Converted
        /// \return Return a long of the string
        long my_atol(char const *str);

        /// \brief Convert a string in a long long
        /// \param str The string to be Converted
        /// \return Return a long long of the string
        long long my_atoll(char const *str);

    //my_strings

        /// \brief Add a string a the end of another string
        /// \param dest The destination string
        /// \param str The string to be added
        /// \return Return the {dest} string
        char *my_strcat(char *dest, char const *src);

        /// \brief Look for the first occurence of a character in a string
        /// \param str The string in which to search
        /// \param searchedChar The char researched
        /// \return Return a pointer to the first occurence if found,
        /// else return 0
        char *my_strchr(char *str, int searchedChar);

        /// \brief Compare 2 string to known if the first one is lower,
        /// equal of upper
        /// \param s1 The first string
        /// \param s2 The second string
        /// \return Return a int negative, positive or neutral
        int my_strcmp(char const *s1, char const *s2);

        /// \brief Copy a string into another
        /// \param dest The destination string
        /// \param src The string to be copied
        /// \return Return the {dest} string
        char *my_strcpy(char *dest, char const *src);

        /// \brief Return the length of the first longest substring containing
        /// any of the specified rejected character
        /// \param str The string in which to search
        /// \param rejectedChars The rejected characters
        /// \return Return the length of the first longest substring
        int my_strcspn(char const *str, char const *rejectedChars);

        /// \brief Duplicate the string passed as a parameter
        /// \param src The string to be Duplicate
        /// \return Return a malloc string
        char *my_strdup(char const *src);

        /// \brief Calc the length of a string
        /// \param str The string for which its length must be calculated
        /// \return Return a length of the string
        int my_strlen(char const *str);

        /// \brief Add nb character of a string at the end of another string
        /// \param dest The destination string
        /// \param src The source string
        /// \param nb The number of characters to be added a the end of {dest}
        /// \return Return the modified {dest} string
        char *my_strncat(char *dest, char const *src, int nb);

        /// \brief Compare nb character of the string
        /// \param str The first string
        /// \param s2 The second string
        /// \param nb The number of characters to be compared
        /// \return Return a int negative, positive or neutral
        int my_strncmp(char const *s1, char const *s2, int nb);

        /// \brief Copy nb character of a string into another
        /// \param dest The destination string
        /// \param src  The source string
        /// \param nb The number of characters to be copied
        /// \return Return the modified {dest} string
        char *my_strncpy(char *dest, char const *src, int nb);

        /// \brief Duplicate nb character of a string passed as a parameter
        /// \param src The string to duplicate
        /// \param size The number of characters to be duplicate
        /// \return Return the suplicate malloc string
        char *my_strndup(char const *src, int size);

    //my_utils
        //csfml

        /// \brief Calc the time elipsed from clock
        /// \param clock The sfClock
        /// \return Return the time elipsed from clock
        float timer(sfClock *clock);

        /// \brief Print a sentence in color on the stdout
        /// \param str The string to be colored
        /// \param color The color chosen.
        /// R : RED | G : GREEN | Y : YELLOW | B : BLUE |
        /// M : MAGENTA | C : CYAN | W : WHITE
        void my_colorprint(char *str, char color);

        /// \brief Read a file.
        /// WARNING : Don't forget to free the returned string.
        /// \param filepath The filepath to the file to be read
        /// \return Return a string with the content of the file
        char *my_readfile(char const *filepath);

        /// \brief Read a file using stat.
        /// WARNING : Don't forget to free the returned string.
        /// \param filepath The filepath to the file to be read
        /// \return Return a string with the content of the file
        char *my_sreadfile(char const *filepath);

#endif /* !MYLIB_H_ */