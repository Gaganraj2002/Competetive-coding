// Birthday candies
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int max = 0;
int main()
{
	int k, candies[50], candyUs[50], i = 0;
	char buffer[1024];
	char *aux;
	scanf("%d\n", &k);
	fgets(buffer, 1023, stdin);
	aux = strtok(buffer, ",");
	while (aux)
	{
		candies[i] = atoi(aux);
		i++;
		aux = strtok(NULL, ",");
		if (i > 50)
		{
			break;
		}
	}
	for (int j = 0; j <= i; j++)
	{
		if (candies[j] >= k + 1)
		{
			int val = candies[j], per_loop = 0;
			while (val)
			{
				if (val > k + 1)
				{
					val = val - (k + 1);
					per_loop += 1;
				}
				else
				{
					candyUs[j] = val + per_loop;
					break;
				}
			}
		}
		else
		{
			candyUs[j] = candies[j];
		}
	}
	for (int a; a <= i; a++)
	{
		if (candyUs[a] > max)
		{
			max = candyUs[a];
		}
	}
	printf("%d", max);
}
