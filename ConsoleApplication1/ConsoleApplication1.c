#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int din_mass()
{
	printf("Введите кол-во индексов: \n");
	int n;
	scanf_s("%d", &n);
	int* a = malloc(n), sazeof(int);
	for (long i = 0; i < n; i++)
	{
		printf("%d", i);
		printf(" ");
		*(a + i);	//Значение следующего байта
	}
	int vix;
	printf("\nХотите удалить массив? ");
	scanf_s("%d", &vix);
	if (vix == 1)
	{
		free(a);
		printf("Массив удален\n");
	}
	else if (vix == 0)
	{
		printf("Вы решили не удалять массив\n");
	}
	else
	{
		printf("\n");
		scanf_s("%d", &vix);
	}

}

int Treug_matr()
{
	int p = 0;
	printf("Введите размерность массива: ");
	int n;
	scanf_s("%d", &n);

	int** pp = malloc(n * sizeof(int)); //Функция malloc выделяет блок памяти

	for (int i = 0; i < n; i++)
	{
		pp[i] = malloc((i + 1) * sizeof(int));

		for (int j = 0; j <= i; j++)
		{
			pp[i][j] = p;
			p++;

		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(" %d", pp[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		free(pp[i]);	//Функция free очищает память
	}
	free(pp);
	return 0;
}

Funkc(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %d ", *(a + i));
	}
}

int Funkc2()
{
	printf("Введите длину:\n");
	int r = 0;
	scanf_s("%d", &r);
	int* mass = calloc(r, sizeof(int));
	for (int i = 0; i < r; i++)
	{
		*(mass + i) = i;
	}
	printf("\n");
	Funkc(mass, r);
}

int Red()
{
	int pov = 1;
	while (pov == 1)
	{
		int i;
		int* red = &i;
		scanf_s("%d", red);
		printf("%p\n", red);
		printf("Хотите редактировать число?\n1-да\n0-нет\n");
		scanf_s("%d", &pov);
	}
}

int Kvadr(int x)
{
	return x * x;
}

int Pointers_funkc(int (*f)(int), int i)
{
	return f(i);
}

int main()
{
	system("chcp 1251>nul");
	system("cls");

	int povtor = 0;
	int vibor;
	do
	{
		printf("1. Редактирование и вывод значения целочисленной при обращении к ней из консольного окна\n");
		printf("2. Динамическое создание и удаление массива из одного миллиона элементов типа int. значения элементов массива должны быть равны значению их индексов\n");
		printf("3. Функция для вывода на экран консоли массива произвольной длины\n");
		printf("4. Используя указатели, сформировать треугольную матрицу\n");
		printf("5. Написать программу с использованием указателя на функцию и с использованием указателя на функцию в качестве аргумента\n\n");
		scanf_s("%d", &vibor);
		switch (vibor)
		{
		case 1:
			printf("Вы выбрали:\nРедактирование и вывод значения целочисленной при обращении к ней из консольного окна");
			Red();
			break;

		case 2:
			printf("Вы выбрали:\nДинамическое создание и удаление массива из одного миллиона элементов типа int. значения элементов массива должны быть равны значению их индексов\n");
			din_mass();
			break;

		case 3:
			printf("Вы выбрали:\nФункция для вывода на экран консоли массива произвольной длины\n");
			Funkc2();
			break;

		case 4:
			printf("Вы выбрали:\nИспользуя указатели, сформировать треугольную матрицу\n");
			Treug_matr();
			printf(".....................................\n");
			break;

		case 5:
			printf("Вы выбрали:\nПрограмму с использованием указателя на функцию и с использованием указателя на функцию в качестве аргумента\n");
			printf("%d", Pointers_funkc(Kvadr, 10));
			break;

		default:
			break;
		}



		printf("\n\nЗавершить работу? "); scanf_s("%d", &povtor);

	} while (povtor != 1);
}
