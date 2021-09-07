/*
** EPITECH PROJECT, 2021
** main file of EHG
** File description:
** main
*/

#include "ehg.h"

int main(int argc, char *argv[])
{
    gen_t *gen = init_gen();
    config_setting_t *root, *setting;

    param_handler(argc, argv, gen);
    root = config_root_setting(&gen->cfg);
    setting = config_setting_get_member(root, "ehg");
    if (!setting)   //Check if the setting group Exist on the config file)
        init_config(gen);
    destroy(gen);
    return (error_handler(NORMAL));
}