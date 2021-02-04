/*
** EPITECH PROJECT, 2020
** my_print_extra
** File description:
** my_print_extra
*/

void my_print_int(int i);

void my_print_char(char c);

void my_print_string(char *str);

int my_intlen(int nb);

void my_print_uoctal(unsigned int i);

void my_print_short(double d)
{
    int leftPart = (int) d, i = 0;

    my_print_int(leftPart);

    d -= leftPart;
    my_print_char('.');
    while (i != 6) {
        d *= 10;
        i++;
        if (((int)d % 10) == 0){
            d /= 10;
            break;
        }
    }
    my_print_int((int)d);
}

void my_print_scientific(double d, int check)
{
    int leftPart = (int) d, length = (my_intlen(leftPart) -1), buf = 0;

    d -= leftPart;
    for (int i = 0; i != length ; i++, leftPart /= 10)
        buf = buf * 10 + (leftPart % 10);
    my_print_int(leftPart);
    my_print_char('.');
    while (my_intlen(buf) != 6) {
        d *= 10;
        buf = buf * 10 + ((int)d);
        d -= (int)d;
    }
    my_print_int(buf);
    if (check == 1)
        my_print_string("E+");
    else
        my_print_string("e+");
    if (length < 10)
        my_print_int(0);
    my_print_int(length);
}

void my_print_nonp(char *str)
{
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] < 32 || str[i] >= 127){
            my_print_char('\\');
            if (str[i] < 8)
                my_print_string("00");
            else if (str[i] < 64)
                my_print_char('0');
            my_print_uoctal(str[i]);
        }
        else
            my_print_char(str[i]);
    }
}