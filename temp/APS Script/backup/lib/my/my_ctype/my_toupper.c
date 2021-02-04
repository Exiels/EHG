/*
** EPITECH PROJECT, 2020
** my_toupper
** File description:
** Transform a lowercase character to a uppercase character
*/

int my_toupper(int character)
{
    if (character > 96 && character < 123)
        return ((character - 32));
    else
        return (character);
}