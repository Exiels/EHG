/*
** EPITECH PROJECT, 2021
** init_config
** File description:
** init_config
*/

#include "ehg.h"

void init_config(gen_t *gen)    //Function that init the config file
{
    config_setting_t *root, *setting, *lib, *p_struct;
    char lib_path[2048];
    char p_struct_path[2048];

    root = config_root_setting(&gen->cfg);
    setting = config_setting_get_member(root, "ehg");
    if (!setting)   //Check if the setting group Exist on the config file
        setting = config_setting_add(root, "ehg", CONFIG_TYPE_GROUP);
    lib = config_setting_get_member(setting, "lib_path");
    if (!lib) {     //Check if the lib group Exist on the config file
        lib = config_setting_add(setting, "lib_path", CONFIG_TYPE_STRING);
        do {
            printf("Enter your lib path: ");
            fgets(lib_path, 2048, stdin);
            lib_path[strcspn(lib_path, "\n")] = '\0';
            if (0 != access(lib_path, F_OK))
                error_handler(LIB_DIR_DOESNT_EXIST);
        } while (0 != access(lib_path, F_OK));    //Wait for a valid lib path
        config_setting_set_string(lib, lib_path);
    }
    p_struct = config_setting_get_member(setting, "project_struct_path");
    if (!p_struct) {     //Check if the p_struct group Exist on the config file
        p_struct = config_setting_add(setting, "project_struct_path", CONFIG_TYPE_STRING);
        do {
            printf("Enter your project_struct path: ");
            fgets(p_struct_path, 2048, stdin);
            p_struct_path[strcspn(p_struct_path, "\n")] = '\0';
            if (0 != access(p_struct_path, F_OK))
                error_handler(PROJECT_STRUCT_DIR_DOESNT_EXIST);
        } while (0 != access(p_struct_path, F_OK));    //Wait for a valid p_struct path
        config_setting_set_string(p_struct, p_struct_path);
    }
    if(!config_write_file(&gen->cfg, CONFIG_FILE_NAME)) { //Check if the config file is writable
        config_destroy(&gen->cfg);
        error_handler(CANNOT_WRITE_CONFIG_FILE);
    }

  fprintf(stderr, "Updated configuration successfully written to: %s\n", CONFIG_FILE_NAME);
}