#include "main.h"
/**
*_isalpha - This confirms if alphabetic characters are present
*@c: this is the checked character
*Return: 1 if c is letter, else 0
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
