/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** .h for bsprintf
*/

#ifndef BSPRINTF_H
    #define BSPRINTF_H

    #define ARRAY_SIZE 12
    #define HASH_ARRAY_SIZE 5

    #include <stdarg.h>

int my_putchar(char c);
int my_putstr(char const *str);
int my_printf(char *fmt, ...);
int my_put_nbr(int nb);
int my_put_unsigned_int(unsigned int);
int my_put_nbr_base(unsigned int nb, char *base);
int my_put_float(float f);
int my_put_flag_s(char *str);

int disp_num(va_list *flag);
int disp_str(va_list *flag);
int disp_flag_s(va_list *flag);
int disp_char(va_list *flag);
int disp_hash_hex_upper(va_list *flag);
int disp_hash_hex_lower(va_list *flag);
int disp_hash_bin(va_list *flag);
int disp_hash_oct(va_list *flag);
int disp_hex_lower(va_list *flag);
int disp_float(va_list *flag);
int disp_hex_upper(va_list *flag);
int disp_octal(va_list *flag);
int disp_binary(va_list *flag);
int disp_unsigned_int(va_list *flag);
int my_dprintf(int fd, char *fmt, ...);
int my_num_len(int nb);
int find_div(int nb , int div);

int disp_dchar(int fd, va_list *flag);
int disp_dstr(int fd, va_list *flag);
int disp_dnum(int fd, va_list *flag);
int disp_dunsigned_int(int fd, va_list *flag);
int disp_dfloat(int fd, va_list *flag);
int my_put_dfloat(int fd, float f);
int my_put_dnbr(int fd, int nb);
int my_put_dunsigned_int(int fd, unsigned int nb);

int find_base_len(unsigned int nb , char *base);
int my_strlen(char const *str);
char *my_revstr(char *str);

typedef struct disp_hash_flags {
    char hash_flag;
    int(*disp_hash)(va_list *flag);
} hash_flag_t;

typedef struct disp_flags {
    char flag;
    int(*disp)(va_list *flag);
} flags_t;

typedef struct disp_dflags {
    char flag;
    int(*disp)(int fd, va_list *flag);
} dflags_t;

#endif
