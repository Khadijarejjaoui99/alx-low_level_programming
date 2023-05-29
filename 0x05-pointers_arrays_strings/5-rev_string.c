

/**
 * rev_string - reverses a string
 * @s: string to be reversed
*/
void rev_string(char *s)
{
	int i, temp;
	int len = sizeof(s) / sizeof(s[0]);
	for (i = 0; i < len; i++)
	{
		temp = s[i];
		s[i] = s[len];
		s[len--] = temp;
	}
}
