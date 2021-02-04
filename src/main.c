/*
** EPITECH PROJECT, 2021
** main
** File description:
** Main File
*/

#include "../includes/my.h"
#include "../includes/mylib.h"

void destroy(gen_t *general)
{
    free(general->config_file->file_cntn);
    for (int i = 0; i != general->config_file->nb_rows; i++) {
        free(general->config_file->file_array[i]);
    }
    free(general->config_file->file_array);
    free(general->config_file);
    free(general);
}

void config_to_2darray(file_t *file)
{
    for (int i = 0; file->file_cntn[i] != '\0'; i++) {
        if (file->file_cntn[i] == '\n' ||
            file->file_cntn[i] == '\0')
            file->nb_rows++;
    }
    file->file_array = malloc(sizeof(char *) * file->nb_rows);
    for (int i = 0; i != file->nb_rows; i++)
        file->file_array[i] = malloc(sizeof(char) * BUFF_SIZE);
}

int main(int argc, char const *argv[])
{
    gen_t *general = init_gen();

    general->config_file->file_cntn = my_sreadfile(argv[1]);
    config_to_2darray(general->config_file);
    printf("nb_rows :%d\n", general->config_file->nb_rows);
    printf("%s\n", general->config_file->file_cntn);
    destroy(general);
    return (error_handler(NORMAL));
}