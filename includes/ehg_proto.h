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
        void reset_ehg(gen_t *gen);
    //errorhandler.c
        int error_handler(int error_id);
    //init_config.c
        void init_config(gen_t *gen);
#endif /* !EHG_PROTO_H_ */
