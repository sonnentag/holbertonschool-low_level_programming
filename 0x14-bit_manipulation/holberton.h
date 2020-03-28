#ifndef _HBTN_H
#define _HBTN_H

unsigned int binary_to_uint(const char *b);
int _strlen(const char *s);
int _pow_rec(int x, int y);

void print_binary(unsigned long int n);
int _putchar(char c);

int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif
