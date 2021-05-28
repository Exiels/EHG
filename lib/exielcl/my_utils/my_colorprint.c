/*
** EPITECH PROJECT, 2021
** my_colorprint
** File description:
** Print a sentence in color on the stdout
*/

#include "exielcl.h"

void my_colorprint(char *str, char color)
{
    switch (color) {
        case 'R': my_printf(RED "%s" RESET, str);
            break;
        case 'G': my_printf(GRN "%s" RESET, str);
            break;
        case 'Y': my_printf(YEL "%s" RESET, str);
            break;
        case 'B': my_printf(BLU "%s" RESET, str);
            break;
        case 'M': my_printf(MAG "%s" RESET, str);
            break;
        case 'C': my_printf(CYN "%s" RESET, str);
            break;
        case 'W': my_printf(WHT "%s" RESET, str);
            break;
        default: my_printf(RED "ERROR : Unknown Color.\n" RESET);
            break;
    }
}