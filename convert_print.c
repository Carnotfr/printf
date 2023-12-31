#include "main.h"

/**
 * convert - A function that converts number and base into string
 * @num: input number
 * @base: input base
 * @lowercase: flag if hexadecimal characters need must be lowercase
 * Authors: Franco Bugenge and Martha Chaitezvi
 * Return: result of string
 */

char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
