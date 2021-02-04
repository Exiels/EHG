/*
** EPITECH PROJECT, 2021
** my_timer
** File description:
** Return the time elipsed from clock
*/

#include <SFML/Graphics.h>

float timer(sfClock *clock)
{
    sfTime time;
    float seconds;

    time = sfClock_getElapsedTime(clock);
    seconds = time.microseconds / 1000000.0;
    return (seconds);
}