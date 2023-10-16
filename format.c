#include "main.h"
/**
 * print_char 
 * @list: list
 * Return: 
 */
int print_char(va_list list)
{
	_write_char(va_arg(list, int));
	return (1);
}

/**
 * print_string 
 * @list: 
 * Return: 
 */
int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_write_char(str[i]);
	return (i);
}

/**
 * print_percent 
 * @list:
 * Return: 
 */
int print_percent(__attribute__((unused))va_list list)
{
	_write_char('%');
	return (1);
}

/**
 * _write_char -
 * @c: 
 *
 * Return: 
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}



