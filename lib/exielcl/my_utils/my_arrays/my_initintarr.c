/*
** EPITECH PROJECT, 2021
** my_initintarr
** File description:
** my_initintarr
*/

#include <stdlib.h>

int **init_intarr(int nb_rows, int nb_lines)
{
    int **arr = malloc(sizeof(int *) * (nb_rows + 1));

    for (int i = 0; i != nb_rows; i++) {
        arr[i] = malloc(sizeof(int) * (nb_lines + 1));
        for (int j = 0; j != nb_lines; j++)
            arr[i][j] = 0;
    }
    return (arr);
}