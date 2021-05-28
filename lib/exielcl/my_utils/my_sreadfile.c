/*
** EPITECH PROJECT, 2021
** my_sreadfile
** File description:
** Read a file using stat
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void my_colorprint(char *str, char color);

char *my_sreadfile(char const *filepath)
{
    int fd, size;
    char *buff;
    struct stat fichier;

    stat(filepath, &fichier);
    buff = malloc(sizeof(char) * (fichier.st_size + 1));
    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        buff[0] = '!';
        my_colorprint("ERROR : Cannot open file\n", 'R');
        return (buff);
    }
    size = read(fd, buff, fichier.st_size);
    if (size == -1) {
        buff[0] = '!';
        my_colorprint("ERROR : Cannot read file\n", 'R');
        return (buff);
    }
    buff[fichier.st_size] = '\0';
    return (buff);
}