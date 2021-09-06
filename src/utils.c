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