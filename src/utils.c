/*
** EPITECH PROJECT, 2021
** utils
** File description:
** utils
*/

#include "ehg.h"

void destroy(gen_t *gen)
{
    config_destroy(&gen->cfg);
    free(gen);
}

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