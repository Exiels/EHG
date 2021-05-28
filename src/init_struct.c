/*
** EPITECH PROJECT, 2021
** init_struct
** File description:
** init_struct
*/

#include "ehg.h"

gen_t *init_gen(void)
{
    FILE *file;
    gen_t *gen = malloc(sizeof(gen_t));

    config_init(&gen->cfg);
    config_set_options(&gen->cfg,
                     (CONFIG_OPTION_FSYNC
                      | CONFIG_OPTION_SEMICOLON_SEPARATORS
                      | CONFIG_OPTION_COLON_ASSIGNMENT_FOR_GROUPS
                      | CONFIG_OPTION_OPEN_BRACE_ON_SEPARATE_LINE));
    if (access(CONFIG_FILE_NAME, F_OK) != 0) {
        file = fopen(CONFIG_FILE_NAME, "w");
        if (!file) {
            config_destroy(&gen->cfg);
            error_handler(CANNOT_CREATE_CONFIG_FILE);
        }
        fclose(file);
    }
    if(!config_read_file(&gen->cfg, CONFIG_FILE_NAME)) {
        fprintf(stderr, "%s%s:%d - %s\n%s", RED, config_error_file(&gen->cfg),
        config_error_line(&gen->cfg), config_error_text(&gen->cfg), RESET);
        config_destroy(&gen->cfg);
        error_handler(CANNOT_READ_CONFIG_FILE);
    }
    return (gen);
}