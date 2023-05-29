/**
 * _strlen - a function that returns the length of a string.
 * @s: string to find its length
 *
 * Return: length of the string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}
