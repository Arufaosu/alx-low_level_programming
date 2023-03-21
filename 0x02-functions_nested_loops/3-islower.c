#include"main.h"

/**
 * _islowe
 * check if char is lowercase
 * return 1 if char is lowcase otherwise 0
 */

int _islower(int c)
{
	if(c >='a' && c <='z')
		return(1);
	else
		return(0);
}
