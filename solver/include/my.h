/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** all prototypes
*/

#ifndef MY_H
    #define MY_H

    #define ARRAY_SIZE 12
    #define HASH_ARRAY_SIZE 5
    #include <stdarg.h>
    #include <stdbool.h>
    #include <stddef.h>

    void *my_memset(void *ptr, int value, size_t bytes);
    void *my_memcpy(void *dest, const void *src, size_t n);
    bool is_alphanum(char c);
    bool is_alpha(char c);
    char *new_string(char *str);
    void print_narray(char **array, int n);
    char **copy_array(char **array);
    int array_len(char **array);
    char *my_strdup(char const *src);
    int my_atoi(char *str);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int *size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    bool my_str_isalpha(char const *str);
    bool my_str_isalphanum(char const *str);
    bool my_str_isnum(char const *str);
    bool char_isnum(char c);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_freed_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    int count_char(char *separator, char *str);
    int count_words(char *separator, char *str);
    int my_putchar(char c);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    int count_separator(char *separator, char *str);
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
    int find_base_len(unsigned int nb , char *base);
    char *clean_str(char *dirty_str);
    void free_array(char **array);
    char **str_append(char *new_str, char **array);
    char **remove_array_element(int index, char **array);

    bool check_separator(char *separator, char c);
    char **my_str_to_word_array(char *str, char *separator);
    char **str_append_no_free(char const *new_str, char **array);

#endif
