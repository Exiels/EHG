/*
** EPITECH PROJECT, 2021
** my_readfile
** File description:
** Read a file
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "../includes/mylib.h"

char *my_readfile(char const *filepath)
{
    char *buff = malloc(sizeof(char) * (BUFF_SIZE + 1));
    int offset = 0, size, fd, j = 0;

    fd = open(filepath, O_RDONLY);
    if (fd == -1)
        my_colorprint("ERROR : Cannot open file\n", 'R');
    while ((size = read(fd, buff + offset, BUFF_SIZE - offset)) > 0) {
        offset = offset + size;
    }
    if (size == -1)
        my_colorprint("ERROR : Cannot read file\n", 'R');
    buff[offset] = '\0';
    return (buff);
}