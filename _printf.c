#include "main.h"

/**
 * _printf - 
 * print a string
 * @format: 
 * Return: total characters
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		int _write_char(char);
		int print_char(va_list);
		int print_string(va_list);
		int print_percent(va_list);
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*parser*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
