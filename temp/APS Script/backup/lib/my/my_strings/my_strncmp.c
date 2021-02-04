/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Compare nb character of the string
*/

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int vals1 = 0, vals2 = 0;

    for (int i = 0; i != nb; i++) {
        vals1 += (int)s1[i];
        vals2 += (int)s2[i];
    }
    return (vals1 - vals2);
}