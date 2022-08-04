/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** task04
*/

int my_compute_power_rec(int nb, int power)
{
    int res;

    if (power > 30)
        return (0);
    if (power == 0)
        return (1);
    if (power < 0)
        return (0);
    res = my_compute_power_rec(nb, power - 1) * nb;
    return (res);
}
