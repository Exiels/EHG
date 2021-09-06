/*
** EPITECH PROJECT, 2021
** main file of EHG
** File description:
** main
*/

#include "ehg.h"

void param_handler(int argc, char **argv, gen_t *gen)
{
    int long_opt = 0;
    static struct option long_options[] = {
        {"reset",   no_argument, 0,  'r' },
        {"reinstall",   no_argument, 0,  'R' },
        {"help",    no_argument, 0,  'h' },
        {0,         0,           0,  0 }
    };
    while ((long_opt = getopt_long(argc, argv, "rh", long_options, NULL)) != -1) {
        switch (long_opt) {
            case 'r': reset_ehg(gen);
                destroy(gen);
                exit(NORMAL);
                break;
            case 'h': help();
                destroy(gen);
                exit(NORMAL);
                break;
            case 'R': 
                destroy(gen);
                exit(NORMAL);
                break;
            case '?': error_handler(PARAMETER_ERROR);
                break;
            default: error_handler(PARAMETER_ERROR);
                break;
        }
    }
}