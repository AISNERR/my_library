#include <stdio.h>  //Для printf
#include <string.h>   //Для memset

int main (void)
{
   // Исходный массив
   unsigned char src[20]="12345678907777";
 
   // Заполняем массив символом ‘1’
   memset(src, '1', 10);

   // Вывод массива src на консоль
   printf("src: %s\n", src);

   return 0;
}