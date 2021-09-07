/*
** EPITECH PROJECT, 2021
** init_config
** File description:
** init_config
*/

#include "ehg.h"

static void set_lib_path(config_setting_t *setting)
{
    config_setting_t *lib;
    char lib_path[2048];

    lib = config_setting_get_member(setting, "lib_path");
    if (!lib) {     //Check if the lib group Exist on the config file
        lib = config_setting_add(setting, "lib_path", CONFIG_TYPE_STRING);
        do {
            printf("Enter the full lib dir path: ");
            fgets(lib_path, 2048, stdin);
            lib_path[strcspn(lib_path, "\n")] = '\0';
            if (0 != access(lib_path, F_OK))
                error_handler(INVALID_PATH);
        } while (0 != access(lib_path, F_OK));    //Wait for a valid lib path
        config_setting_set_string(lib, lib_path);
    }
    printf("\e[1;1H\e[2J");
}

static void set_p_dir_path(config_setting_t *setting)
{
    config_setting_t *p_struct;
    char p_struct_path[2048];

    p_struct = config_setting_get_member(setting, "project_struct_path");
    if (!p_struct) {     //Check if the p_struct group Exist on the config file
        p_struct = config_setting_add(setting, "project_struct_path", CONFIG_TYPE_STRING);
        do {
            printf("Enter the full project_struct dir path: ");
            fgets(p_struct_path, 2048, stdin);
            p_struct_path[strcspn(p_struct_path, "\n")] = '\0';
            if (0 != access(p_struct_path, F_OK))
                error_handler(INVALID_PATH);
        } while (0 != access(p_struct_path, F_OK));    //Wait for a valid p_struct path
        config_setting_set_string(p_struct, p_struct_path);
    }
    printf("\e[1;1H\e[2J");
}

static void set_logs_path(config_setting_t *setting)
{
    config_setting_t *logs;
    char logs_path[2048];

    logs = config_setting_get_member(setting, "logs_path");
    if (!logs) {     //Check if the p_struct group Exist on the config file
        logs = config_setting_add(setting, "logs_path", CONFIG_TYPE_STRING);
        do {
            printf("Enter the full logs dir path: ");
            fgets(logs_path, 2048, stdin);
            logs_path[strcspn(logs_path, "\n")] = '\0';
            if (0 != access(logs_path, F_OK))
                error_handler(INVALID_PATH);
        } while (0 != access(logs_path, F_OK));    //Wait for a valid p_struct path
        config_setting_set_string(logs, logs_path);
    }
    printf("\e[1;1H\e[2J");
}

static void first_setup_guide(config_setting_t *setting)
{
    config_setting_t *created;

    created = config_setting_get_member(setting, "created");
    if (!created) {
        created = config_setting_add(setting, "created", CONFIG_TYPE_BOOL);
        config_setting_set_bool(created, true);
        printf("\e[1;1H\e[2J");
        printf("\n _______           _______ \n(  ____ \\|\\     /|(  ____ \\\n| (    \\/| )   ( || (    \\/\n| (__    | (___) || |      \n|  __)   |  ___  || | ____ \n| (      | (   ) || | \\_  )\n| (____/\\| )   ( || (___) |\n(_______/|/     \\|(_______)\n\n");
        printf("Hello and welcome to EHG ! The best software for every Epitech student !\n");
        printf("I'm here to guide you through the setup process.\n\n");
        printf("I need you to give me some path to your lib, log and project_dir template.\n");
        printf("Press Enter to continue...\n");
        getchar();
        printf("\e[1;1H\e[2J");
    }
    set_lib_path(setting);
    set_p_dir_path(setting);
    set_logs_path(setting);
}

void init_config(gen_t *gen)    //Function that init the config file
{
    config_setting_t *root, *setting, *created;

    root = config_root_setting(&gen->cfg);
    setting = config_setting_get_member(root, "ehg");
    if (!setting)   //Check if the setting group Exist on the config file
        setting = config_setting_add(root, "ehg", CONFIG_TYPE_GROUP);
    created = config_setting_get_member(setting, "created");
    if (!created || (config_setting_get_bool(created) != true))
        first_setup_guide(setting);
    else {
        set_lib_path(setting);
        set_p_dir_path(setting);
        set_logs_path(setting);
    }
    if(!config_write_file(&gen->cfg, CONFIG_FILE_NAME)) { //Check if the config file is writable
        config_destroy(&gen->cfg);
        error_handler(CANNOT_WRITE_CONFIG_FILE);
    }
  fprintf(stderr, "Updated configuration successfully written to: %s\n", CONFIG_FILE_NAME);
}