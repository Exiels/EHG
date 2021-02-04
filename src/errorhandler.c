/*
** EPITECH PROJECT, 2021
** errorhandler
** File description:
** An file containing error handler functions
*/

#include "../includes/my.h"
#include "../includes/mylib.h"

int error_handler(int error_id)
{
    switch (error_id) {
        case NORMAL:
            return (NORMAL);
            break;
        default: my_printf("%w", "ERROR: Unknown Error.\n");
            return (ERROR);
            break;
    }
}