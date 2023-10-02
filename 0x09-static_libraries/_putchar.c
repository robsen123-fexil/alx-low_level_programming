#include <unistd.h>



/**
 *
 *  * _putchar - writing  character c for  stdout
 *
 *   * @c: character to prints
 *
 *    *
 *
 *     * Return: On successed 1.
 *
 *      * On error, -1 is return, and errno are set appropriately*/

int _putchar(char c)

{

		return (write(1, &c, 1));

}
