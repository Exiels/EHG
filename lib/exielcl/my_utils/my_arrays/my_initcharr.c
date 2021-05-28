/*
** EPITECH PROJECT, 2021
** my_initcharr
** File description:
** my_initcharr
*/

#include <stdlib.h>

char **init_charr(int nb_rows, int nb_lines)
{
    char **arr = malloc(sizeof(char *) * (nb_rows + 1));

    arr[nb_rows] = NULL;
    for (int i = 0; i != nb_rows; i++) {
        arr[i] = malloc(sizeof(char) * (nb_lines + 1));
        for (int j = 0; j != nb_lines; j++)
            arr[i][j] = '\0';
    }
    return (arr);
}