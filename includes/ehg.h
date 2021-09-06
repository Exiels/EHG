/*
** EPITECH PROJECT, 2021
** ehg
** File description:
** Epitech Holy-Grail
*/

#ifndef EHG_H_
#define EHG_H_

//Defines:

    //Config File
        #define CONFIG_FILE_NAME "config.cfg"
    
    //Colors
        #define RESET   "\x1B[0m"
        #define RED     "\x1B[31m"
        #define GRN     "\x1B[32m"
        #define YEL     "\x1B[33m"
        #define BLU     "\x1B[34m"
        #define MAG     "\x1B[35m"
        #define CYN     "\x1B[36m"
        #define WHT     "\x1B[37m"

    //Error:
        #define NORMAL  0
        #define ERROR   1

        #define CANNOT_READ_CONFIG_FILE             0x2
        #define CANNOT_WRITE_CONFIG_FILE            0x3
        #define CANNOT_CREATE_CONFIG_FILE           0x4
        #define CANNOT_DELETE_CONFIG_FILE           0x5
        #define PARAMETER_ERROR                     0x6
        #define LIB_DIR_DOESNT_EXIST                0x7
        #define PROJECT_STRUCT_DIR_DOESNT_EXIST     0x8

//Includes:
    #include "ehg_proto.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #include <libconfig.h>
    #include <getopt.h>
    #include <stdbool.h>
    #include <dirent.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <errno.h>
//Structures:
    typedef struct flags flags_t;
    struct flags {
        bool reset;
    };

    typedef struct gen gen_t;
    struct gen {
        flags_t *flags;
        config_t cfg;
    };    

#endif /* !EHG_H_ */
