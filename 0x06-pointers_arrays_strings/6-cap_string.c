#include "main.h"

/**
 * cap_string -capitalize all words of a string
 * @r: pointer to string
 * Return: pointer to r
 */

char *cap_string(char *r)
{
	int string_count;

/* scan through the string */
	string_count = 0;
	while (r[string_count] != '\0')
	{/* if next character after count is a char, capitalize it */
	if (r[0] >= 97 && r[0] <= 122)
	{
		r[0]  = r[0] - 32;
	}
	if (r[string_count] == ' ' || r[string_count] == '\t' ||
		r[string_count] == '\n' || r[string_count] == ',' || r[string_count] == ';'
		|| r[string_count] == '.' || r[string_count] == '!' ||
		r[string_count] == '?' || r[string_count] == '"' || r[string_count] == '('
		|| r[string_count] == ')' || r[string_count] == '{'
		|| r[string_count] == '}')
	{
		if (r[string_count + 1] >= 97 && r[string_count	+ 1] <= 122)
		{
			r[string_count + 1] = r[string_count + 1] - 32;
		}
	}
	string_count++;
	}
	return (r);
}

