/*
** EPITECH PROJECT, 2021
** errorhandler
** File description:
** A global errorhandler file for the project
*/

#include "ehg.h"

int error_handler(int error_id)
{
    switch (error_id) {
        case NORMAL: return (NORMAL);
            break;
        case ERROR: fprintf(stderr, "%sERROR: UNKNOWN ERROR.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case CANNOT_WRITE_CONFIG_FILE: fprintf(stderr, "%sERROR: CANNOT WRITE CONFIG FILE.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case CANNOT_CREATE_CONFIG_FILE: fprintf(stderr, "%sERROR: CANNOT CREATE CONFIG FILE.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case CANNOT_DELETE_CONFIG_FILE: fprintf(stderr, "%sERROR: CANNOT DELETE CONFIG FILE.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case PARAMETER_ERROR:exit(ERROR);
            break;
        case CANNOT_READ_CONFIG_FILE: exit(ERROR);
            break;
        case INVALID_PATH: fprintf(stderr, "\n\n%sERROR: INVALID PATH.\n%s", RED, RESET);
            return(ERROR);
            break;
        case CONFIG_FILE_NOT_SET: fprintf(stderr, "\n\n%sERROR: CONFIG FILE NOT SET.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case PROJECT_STRUCT_PATH_NOT_SET: fprintf(stderr, "\n\n%sERROR: PROJECT STRUCT PATH NOT SET.\n%s", RED, RESET);
            exit(ERROR);
            break;
        case LIB_PATH_NOT_SET: fprintf(stderr, "\n\n%sERROR: LIB PATH NOT SET.\n%s", RED, RESET);
            exit(ERROR);
            break;
        default: fprintf(stderr, "%sERROR: UNKNOWN ERROR.\n%s", RED, RESET);
            exit(ERROR);
            break;
    }
}