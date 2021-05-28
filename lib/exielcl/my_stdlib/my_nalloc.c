/*
** EPITECH PROJECT, 2021
** my_nalloc
** File description:
** my_nalloc
*/

char *my_nalloc(char *pointer, int nb_elements)
{
    for (int i = 0; i != nb_elements; i++) {
        pointer[i] = '\0';
    }
    return (pointer);
}