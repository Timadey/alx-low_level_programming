/**
 * print_name -  prints a name.
 * @name: name to print
 * @f: pointer to function that prints the name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
