/*
** EPITECH PROJECT, 2021
** my_print2darr
** File description:
** my_print2darr
*/

void my_printf(char *str, ...);

void my_print_2dintarr(int **arr, int nb_rows, int nb_lines)
{
    for (int i = 0; i != nb_rows; i++) {
        for (int j = 0; j != nb_lines; j++)
            my_printf("%d", arr[i][j]);
        my_printf("\n");
    }
}