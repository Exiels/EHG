/*
** EPITECH PROJECT, 2020
** my_isgraph
** File description:
** Check if a character possesses a graphical representation
*/

int my_isgraph(int character)
{
    if ((character > 33 && character < 94) ||
        (character > 95 && character < 126))
        return (1);
    else
        return (0);
}