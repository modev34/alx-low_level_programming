#include "main.h"
/**
 * cap_string - capitalizes the first letter of each word in a string
 * @s: pointer to the string to be capitalized
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
				s[i] -= ('a' - 'A');
			else
			{
				for (int j = 0; j < 13; j++)
				{
					if (s[i - 1] == sep[j])
					{
						s[i] -= ('a' - 'A');
						break;
					}
				}
			}
		}
		i++;
	}

	return (s);
}

