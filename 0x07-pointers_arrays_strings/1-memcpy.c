/**
 *_memcpy - copies memory area from src to dest n amount of times
 *
 *@dest: pointer with copied data
 *@src: pointer with data to be copied
 *@n: number of times the data will be copied
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
