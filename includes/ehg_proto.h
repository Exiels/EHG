/*
** EPITECH PROJECT, 2021
** ehg_proto
** File description:
** Epitech Holy-Grail Prototypes
*/

#ifndef EHG_PROTO_H_
#define EHG_PROTO_H_

//Prototypes:
    typedef struct gen gen_t;
    //init_struct.c
        gen_t *init_gen(void);
    //utils.c
        void destroy(gen_t *gen);
    //errorhandler.c
        int error_handler(int error_id);
    //init_config.c
        void init_config(gen_t *gen);
    //opthandler.c
        void param_handler(int argc, char **argv, gen_t *gen);
    //commands
        //help.c
            void help(void);
        //reset.c
            void reset_ehg(gen_t *gen);
        //reinstall.c
            void reinstall_ehg(gen_t *gen);
        //new_project.c
            void new_project(gen_t *gen);
#endif /* !EHG_PROTO_H_ */
