/*
** EPITECH PROJECT, 2021
** EHG
** File description:
** init_struct
*/

#include "../includes/my.h"
#include "../includes/mylib.h"

file_t *init_file(void)
{
    file_t *file = malloc (sizeof(*file));

    file->nb_rows = 1;
    file->nb_lines = 0;
    return (file);
}

gen_t *init_gen(void)
{
    gen_t *general = malloc(sizeof(*general));

    general->config_file = init_file();
    return (general);
}