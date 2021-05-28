/*
** EPITECH PROJECT, 2020
** my_strchr
** File description:
** Look for the first occurence of a character in a string
*/

char *my_strchr(char *str, int searchedChar)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == searchedChar)
            return (char *)&(str[i]);
    }
    return (0);
}