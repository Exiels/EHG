/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Compare 2 string to known if the first one is lower, equal of upper
*/

int my_strcmp(char const *s1, char const *s2)
{
    int vals1 = 0, vals2 = 0;

    for (int i = 0; s1[i] != '\0' || s2[i] != '\0'; i++) {
        vals1 = vals1 + s1[i];
        vals2 = vals2 + s2[i];
    }
    return (vals1 - vals2);
}