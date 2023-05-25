
/**
 * _isupper - A function that checks for uppercase character.
 * @c: The chracter to be checked
 *
 * Return: On success 1
 * otherwise 0
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
