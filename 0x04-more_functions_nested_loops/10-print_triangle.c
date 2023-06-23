#include "main.h"

/**
 * print_triangle - entry point
 * Description:1 prints diagonals
 * @size: size of the trianle
 */

void print_triangle(int size)
{
	int row, hashes, spaces;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= size; row++)
		{
			for (spaces = 1; row >= 1; spaces--)
			{
				_putchar(' ');
			}
				for (hashes = 1; hashes <= row; hashes++)
				{
					_putchar('#');
				}
				_putchar('\n');

		}
	}
}
