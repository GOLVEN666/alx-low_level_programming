/**
 * _memset - The _memset() function
 * @s: target
 * @b: constant byte
 * @n: number of byte
 *
 * Description: This function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 *
 * Return: returns new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
 	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
