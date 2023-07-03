#include "main.h"

/**
* _memset - This function fills memory with a constant byte
* s: The starting address of a memory to be filled
* b: The value to be filled
* n: The number of bytes to be filled starting from
* s to be filled

* Return: The function return a pointer to
* the memory area str.
*/

char *_memset(char *s, char b, unsigned int n)
{
   unsigned char *ptr = (unsigned char *)s;
   int i;

   for (i = 0; i < n; i++)
   {
      *ptr++ = (unsigned char)b;
   }
   return (s);
}
