#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
<<<<<<< HEAD
 *File: main.h
 *Auth: sam tech(Samuel birhanu)
 *Desc: Header file containing prototypes for all functions
 *used in the 0x06. C - More pointers, arrays and strings directory.
 */

int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
=======
 *void prototypes()
 *int prototypes()
 *char prototypes()
 */
void reverse_array(int *a, int n);
void print_number(int n);
void print_buffer(char *b, int size);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
>>>>>>> refs/remotes/origin/master
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
<<<<<<< HEAD
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
=======
char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);
>>>>>>> refs/remotes/origin/master

#endif
