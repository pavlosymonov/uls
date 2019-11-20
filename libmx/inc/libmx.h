#ifndef LIBMX_H
#define LIBMX_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <dirent.h>
#include <errno.h>

typedef struct s_list {
	char *data;
	int len;
	struct s_list *next;
} t_list;

// Utils pack:
void mx_printchar(char c);
void mx_printstr(const char *s);
void mx_printint(int n);
void mx_printerr(const char *s);

// String pack:
int mx_strlen(const char *s);
void mx_strdel(char **str);
int mx_get_char_index(const char *str, char c);
char *mx_strdup(const char *s1);
char *mx_strndup(const char *s1, size_t n);
char *mx_strcpy(char *dst, const char *src);
char *mx_strncpy(char *dst, const char *src, int len);
int mx_strcmp(const char *s1, const char *s2);
int mx_count_words(const char *str, char c);
char *mx_strnew(const int size);
char **mx_strsplit(const char *s, char c);
char *mx_itoa(int number);
int mx_atoi(const char *str);
bool mx_isspace(char c);
bool mx_isdigit(char c);
bool mx_isalpha(int c);
void mx_push_back(t_list **list, char *data, int len);
t_list *mx_create_node(char *data, int len);
void mx_sort_list(t_list *lst);
int mx_list_size(t_list *list);
char *mx_strjoin(const char *s1, const char *s2);
char *mx_strcat(char *restrict s1, const char *restrict s2);

#endif