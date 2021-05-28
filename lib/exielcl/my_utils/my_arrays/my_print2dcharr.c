/*
** EPITECH PROJECT, 2021
** my_print_2dcharr
** File description:
** my_print_2dcharr
*/

void my_printf(char *str, ...);

void my_print_2dcharr(char **arr, int nb_rows)
{
    for (int i = 0; i != nb_rows; i++)
        my_printf("%s\n", arr[i]);
}