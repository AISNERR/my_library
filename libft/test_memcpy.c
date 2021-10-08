//#include "libft.h"
#include <stdio.h>  //Для printf
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return (dst);
}

int main (void)
{
   // Массив источник данных
   unsigned char src[10]="12345678";
 
   // Массив приемник данных
   unsigned char dst[10]="";

   // Копируем 6 байт из массива src в массив dst
   ft_memcpy(dst, src, 4);

   // Вывод массива dst на консоль
   printf("dst: %s\n",dst);

   return 0;
}