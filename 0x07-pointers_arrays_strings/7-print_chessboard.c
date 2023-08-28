/**
 * print_chessboard - prints the chessboard
 *
 * @a: pointer to the chessboard
 *  represented as an 8x8 array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
