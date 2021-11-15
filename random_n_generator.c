#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long long	ft_atoi(const char *str)
{
	int i;
	int num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')		
			num = num * 10 + str[i] - '0';
		i++;
	}
	return (num);
}

int main(int argc, char**argv)
{
    int n;
    int i;
    long random;
    
    n = ft_atoi(argv[1]);
    i = 0;
	random = 0;
    srand(time(NULL));
	while (i < n)
    {
		random = rand() % ((long)2147483648 + (long)2147483648) - 2147483648;
		printf("%ld ", random);
        i++;
	}
    return (0);
}