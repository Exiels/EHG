/*
** EPITECH PROJECT, 2020
** my_strcspn
** File description:
** Return the length of the first longest substring containing
** any of the specified rejected character
*/

int my_strcspn(char const *str, char const *rejectedChars)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        for (int j = 0; rejectedChars[j] != '\0'; j++) {
            if (str[i] == rejectedChars[j])
                return (i);
        }
    }
    return (i);
}