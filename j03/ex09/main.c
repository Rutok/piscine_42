#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main(void)
{
	int tab[15] = {5, 3, 6, 2, 7, 78, 56 , 5 , 5 ,2 ,3 ,4 , 44, 2 , 20};
	ft_sort_integer_table(tab, 15);

	int i;
	for(i=0; i<15; i++){
		printf("[%d]", tab[i]);
	}
	return (0);
}
