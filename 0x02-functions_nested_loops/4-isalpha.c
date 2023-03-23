/**
 * main - Entry point 
 * Description : check all the alphabetic character
 * Return: return 1 for alphabetic character or 0 for anything else
 */
	int _asalpha(int c)
{
	if ((c >= 65 && c <= 98)||(c >= 97 && c <= 122))
	{
		return (1);
	}
		return (0);
}
