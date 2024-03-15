#include <stdio.h>
#include "lists.h"

/**
 * before_main_function - print string befor main function executed
 * Return: nothing
 */
void __attribute__ ((constructor)) before_main_function()
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
