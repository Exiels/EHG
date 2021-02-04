/*
** EPITECH PROJECT, 2020
** my_ispunct
** File description:
** Check if a character is a punctuation character
*/

int my_ispunct(int character)
{
    if ((character > 32 && character < 48) ||
        (character > 57 && character < 65) ||
        (character > 90 && character < 97) ||
        (character > 122 && character < 127))
        return (1);
    else
        return (0);
}