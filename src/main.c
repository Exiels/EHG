/*
** EPITECH PROJECT, 2021
** main file of EHG
** File description:
** main
*/

#include "ehg.h"

int main(int argc, char *argv[])
{
    gen_t *gen = init_gen();

    param_handler(argc, argv, gen);
    destroy(gen);
    return (error_handler(NORMAL));
}