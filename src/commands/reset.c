/*
** EPITECH PROJECT, 2021
** reset
** File description:
** reset
*/

#include "ehg.h"

void reset_ehg(gen_t *gen)
{
    FILE *file;

    file = fopen(CONFIG_FILE_NAME, "wb");
    if (!file)
        error_handler(CANNOT_CREATE_CONFIG_FILE);
    fclose(file);
    destroy(gen);
    gen = init_gen();
    init_config(gen);
}