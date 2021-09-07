/*
** EPITECH PROJECT, 2021
** new_project
** File description:
** new_project
*/

#include "ehg.h"

static void copy_lib(config_setting_t *setting)
{
    config_setting_t *lib;
    const char *lib_path;
    char command_lib[2048];

    lib = config_setting_get_member(setting, "lib_path");
    if (!lib)
        error_handler(LIB_PATH_NOT_SET);
    else {
        lib_path = config_setting_get_string(lib);
        if (0 != access("./lib", F_OK))
            mkdir("./lib", S_IRWXU);
        for (size_t ptr = 0; ptr != 2048; ptr++)
            command_lib[ptr] = '\0';
        strcat(command_lib, "cp -r ");
        strcat(command_lib, lib_path);
        strcat(command_lib, "/. ./lib");
        system(command_lib);
    }
}

static void copy_project_dir(config_setting_t *setting)
{
    config_setting_t *p_struct;
    const char *p_struct_dir;
    char command_pd[2048];

    p_struct = config_setting_get_member(setting, "project_struct_path");
    if (!p_struct)
        error_handler(PROJECT_STRUCT_PATH_NOT_SET);
    else {
        p_struct_dir = config_setting_get_string(p_struct);
        for (size_t ptr = 0; ptr != 2048; ptr++)
            command_pd[ptr] = '\0';
        strcat(command_pd, "cp -r ");
        strcat(command_pd, p_struct_dir);
        strcat(command_pd, "/. .");
        system(command_pd);
    }
}

void new_project(gen_t *gen)
{
    config_setting_t *root, *setting;
    char *cwd = getcwd(NULL, 0);
    int response = 0;

    printf("\e[1;1H\e[2J");
    printf("Are you sure you want to create a new project here ?\n");
    printf("Current Working Dir : %s\n", cwd);
    printf("\n(y)es to confirm (n)o to cancel.\n");
    response = getchar();
    if (response == 121) {
        root = config_root_setting(&gen->cfg);
        setting = config_setting_get_member(root, "ehg");
        if (!setting)   //Check if the setting group Exist on the config file
            error_handler(CONFIG_FILE_NOT_SET);
        else {
            copy_project_dir(setting);
            copy_lib(setting);
        }
    }
}