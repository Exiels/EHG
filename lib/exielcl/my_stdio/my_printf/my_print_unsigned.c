/*
** EPITECH PROJECT, 2020
** my_print_unsigned
** File description:
** my_print_unsigned
*/

void my_print_char(char c);

void my_print_int(int i);

void my_print_uoctal(unsigned int i)
{
    unsigned temp = 0, result = 0;

    while (i != 0){
        temp = temp * 10 + (i % 8);
        if ((i % 8) == 0)
            temp = temp * 10;
        i = i / 8;
    }
    while (temp != 0){
        result = result * 10 + (temp % 10);
        temp = temp / 10;
    }
    my_print_int(result);
}

static void set_hexa_val(char hexa[100], int temp, int j, int check)
{
    if (check == 0)
        hexa[j++] = temp + 87;
    else
        hexa[j++] = temp + 55;
}

void my_print_uhexa(int i, int check)
{
    int temp = 0, j = 0;
    char hexa[100];

    while (i != 0) {
        temp = i % 16;
        if (temp < 10)
            hexa[j++] = temp + '0';
        else {
            set_hexa_val(hexa, temp, j, check);
        }
        i /= 16;
    }
    hexa[j] = '\0';
    for (; j >= 0; j--)
        my_print_char(hexa[j]);
}

void my_print_uint(unsigned int i)
{
    unsigned int val = 0;

    if (i <= 9 && i >= 0)
        my_print_char(i + '0');
    if (i > 9) {
        val = i % 10;
        my_print_uint(i / 10);
        my_print_char(val + '0');
    }
}

void my_print_ubinary(unsigned int i)
{
    unsigned int buf = 0;
    while (i != 0){
        buf = buf * 10 + (i % 2);
        i /= 2;
    }
    buf *= 10;
    my_print_uint(buf);
}