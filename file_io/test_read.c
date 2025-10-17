#include "main.h"
#include <stdio.h>

/**
 * main - test the read_textfile function
 *
 * Return: Always 0
 */
int main(void)
{
	ssize_t n;

	/* Test case 1: Normal read */
	printf("Test 1 - Normal read (100 chars):\n");
	n = read_textfile("textfile_0", 100);
	printf("\n-> Read %ld characters\n\n", n);

	/* Test case 2: Read more than file size */
	printf("Test 2 - Read more than file size (10000 chars):\n");
	n = read_textfile("textfile_0", 10000);
	printf("\n-> Read %ld characters\n\n", n);

	/* Test case 3: Read 0 characters */
	printf("Test 3 - Read 0 characters:\n");
	n = read_textfile("textfile_0", 0);
	printf("-> Read %ld characters\n\n", n);

	/* Test case 4: NULL filename */
	printf("Test 4 - NULL filename:\n");
	n = read_textfile(NULL, 10);
	printf("-> Read %ld characters\n\n", n);

	/* Test case 5: File doesn't exist */
	printf("Test 5 - File doesn't exist:\n");
	n = read_textfile("file_does_not_exist", 10);
	printf("-> Read %ld characters\n\n", n);

	/* Test case 6: No read permissions */
	printf("Test 6 - No read permissions:\n");
	n = read_textfile("no_read_perm", 1000);
	printf("-> Read %ld characters\n\n", n);

	/* Test case 7: Exact file size read */
	printf("Test 7 - Exact file size read (2000 chars):\n");
	n = read_textfile("textfile_0", 2000);
	printf("\n-> Read %ld characters\n", n);

	return (0);
}
