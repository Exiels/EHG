/*
** EPITECH PROJECT, 2021
** init_config
** File description:
** init_config
*/

#include "ehg.h"

void init_config(gen_t *gen)
{
    config_setting_t *root, *setting, *lib;
    char lib_path[2048];

    root = config_root_setting(&gen->cfg);
    setting = config_setting_get_member(root, "ehg");
    if (!setting)
        setting = config_setting_add(root, "ehg", CONFIG_TYPE_GROUP);
    lib = config_setting_get_member(setting, "lib_path");
    if (!lib) {
        lib = config_setting_add(setting, "lib_path", CONFIG_TYPE_STRING);
        printf("Enter your lib path: ");
        fgets(lib_path, 2048, stdin);
        lib_path[strcspn(lib_path, "\n")] = '\0';
        config_setting_set_string(lib, lib_path);
    }
    if(!config_write_file(&gen->cfg, CONFIG_FILE_NAME)) {
        config_destroy(&gen->cfg);
        error_handler(CANNOT_WRITE_CONFIG_FILE);
    }

  fprintf(stderr, "Updated configuration successfully written to: %s\n", CONFIG_FILE_NAME);
}