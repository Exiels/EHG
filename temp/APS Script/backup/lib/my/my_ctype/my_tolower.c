/*
** EPITECH PROJECT, 2020
** my_tolower
** File description:
** Transform a uppercase character to a lowercase character
*/

int my_tolower(int character)
{
    if (character > 64 && character < 91)
        return ((character + 32));
    else
        return (character);
}