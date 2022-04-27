/**
 * set_string - sets the value of a pointer to a char.
 * @s: pointer to the address of the char
 * @to: the char to point to
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
