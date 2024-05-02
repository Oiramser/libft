#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int long_dig(int n){
    int longitud;

    longitud = 0;
      while (n != 0)
    {
        n = n / 10;
        longitud++;
    }
    return longitud;
}
char    *ft_itoa(int n)
{
    int longitud;
    int digito;
    char *res;
    char aux[7];
    int i;

longitud = long_dig(n);
digito = n;
i = 0;
  
      res = (char *)malloc((longitud + 1) * sizeof(char));
    if (res == NULL)
    {
        return (NULL);
    }
    if (n == 0)
    {
        res[0] = '0';
        res[1] = '\0';
        return (res);
    }
    while (n > 0)
    {
        digito = n % 10;
        aux[i] = '0' + digito;
        i++;
        n /= 10;
    }
    i = 0;
    while (longitud > 0)
    {
        res[i] = aux[longitud - 1];
        i++;
        longitud--;
    }
    res[i] = '\0';

    return (res);
}

int main()
{
    int n = -1234;
    char *res = ft_itoa(n);

    printf("%s", res);
}