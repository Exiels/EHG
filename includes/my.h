/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

//Defines:
    #define BUFF_SIZE 2048
    //Error:
        #define NORMAL  0
        #define ERROR   84
//Includes:
    #include <stdio.h>
    #include <string.h>
    #include <unistd.h>
    #include <stdlib.h>
    //Temp:
//Structures:
    typedef struct file file_t;
    struct file {
        int nb_rows;
        int nb_lines;
        char *file_cntn;
        char **file_array;
    };
    typedef struct gen {
        file_t *config_file;
    } gen_t;
//Prototypes:
    //errorhandler.c
        int error_handler(int error_id);
    //init_struct.c
        file_t *init_file(void);
        gen_t *init_gen(void);
#endif /* !MY_H_ */
