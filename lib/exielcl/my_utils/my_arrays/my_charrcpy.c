/*
** EPITECH PROJECT, 2021
** my_arrcpy
** File description:
** my_arrcpy
*/

#include <stdlib.h>

char **charrcpy(char **arr, int nb_rows, int nb_lines)
{
    char **cpy = malloc(sizeof(char *) * (nb_rows + 1));

    cpy[nb_rows] = NULL;
    for (int i = 0; i != nb_rows; i++) {
        cpy[i] = malloc(sizeof(char) * (nb_lines + 1));
        for (int j = 0; j != nb_lines; j++)
            cpy[i][j] = '\0';
    }
    for (int i = 0; i != nb_rows; i++) {
        for (int j = 0; j != nb_lines; j++)
            cpy[i][j] = arr[i][j];
    }
    return (cpy);
}