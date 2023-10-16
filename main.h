#ifndef PRINT_F
#define PRINT_F

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct convert 
*
* @sym: 
* @f: 
*/
struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;


int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);

int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_unsgined_number(unsigned int);





#endif
