/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:15:46 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/20 16:34:19 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "./ex22/ft_abs.h"
#include "./ex22/ft_abs.h"

// LIENS VERS LES EXERCICES
#include "./ex06/ft_print_alphabet.c"
#include "./ex07/ft_print_numbers.c"
#include "./ex08/ft_is_negative.c"
#include "./ex09/ft_ft.c"
#include "./ex10/ft_swap.c"
#include "./ex11/ft_div_mod.c"
#include "./ex12/ft_iterative_factorial.c"
#include "./ex13/ft_recursive_factorial.c"
#include "./ex14/ft_sqrt.c"
#include "./ex15/ft_putstr.c"
#include "./ex16/ft_strlen.c"
#include "./ex17/ft_strcmp.c"

#include "./ex20/ft_strdup.c"
#include "./ex21/ft_range.c"
//#include "./ex22/ft_abs.h" //VOIR HEADERS
#include "./ex25/ft_foreach.c"
#include "./ex26/ft_count_if.c"


// PROTOTYPES DES FONCTIONS
void	ft_print_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_ft(int *nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
int		ft_iterative_factorial(int nb);
int		ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strdup(char *src);
int		*ft_range(int min, int max);
int		ft_count_if(char **tab, int (*f)(char*));


// SEPARATEUR
void	ft_entete_exo(int numexo)
{
	printf("\n----------------------------\n\n");
	printf("\t\tex%d \n", numexo);
	printf("---------------------------- ex%d ", numexo);
}

// DEFINITIONS FONCTIONS RECURENTES
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr / 10)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

int		ft_strlen_ex26(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// MAIN MAIN MAIN
int		main(void)
{
/*
	// ##############################
	printf("\n----------------------------\n\n");
	printf("\t\tex06\n"); printf("print alphabet\n");
	// ##############################                 ex06 ft_print_alphabet
	ft_print_alphabet();printf("-");


	// ##############################
	printf("\n----------------------------\n\n");
	printf("\t\tex07\n"); printf("print numbers\n");
	// ##############################                 ex07 ft_print_numbers
	ft_print_numbers();printf("-");


	// ##############################
	printf("\n----------------------------\n\n");
	printf("\t\tex08\n"); printf("is negative/positive\n");
	// ##############################                 ex08 ft_is_negative
	ft_is_negative(0);
	ft_is_negative(1);
	ft_is_negative(2147483647);
	ft_is_negative(-1);
	ft_is_negative(-2147483648);
	ft_is_negative(-42);
	printf("\n0|1|2147483647|-1|-2147486348|-42\n");


	// ##############################
	ft_entete_exo(9); printf("ft_ft.c pointeur=42\n");
	// ##############################                 ex09 ft_ft pointeur=42
	int		nbr;
	int		*p_nbr;

	nbr = 0;
	p_nbr = &nbr;
	printf("nbr=%d\n", nbr);
	ft_ft(p_nbr);
	printf("nbr=%d\n", nbr);


	// ##############################
	ft_entete_exo(10); printf("ft_swap\n");
	// ##############################                 ex10 ft_swap
	int		a;
	int		b;
	int		*pa;
	int		*pb;

	a = 42;
	b = 21;
	pa = &a;
	pb = &b;
	printf("a=%d|b=%d\n", a, b);
	ft_swap(pa, pb);
	printf("a=%d|b=%d\n", a, b);


	// ##############################
	ft_entete_exo(11); printf("ft_div_mod\n");
	// ##############################                 ex11 ft_div_mod
	int		a11, b11, *div, *mod, d, m;

	a11 = 12;
	b11 = 4;
	d = m = 0;
	div = &d;
	mod = &m;
	printf("a=%d|b=%d|div=%d|mod=%d\n", a11, b11, d, m);
	ft_div_mod(a11, b11, div, mod);
	printf("a=%d|b=%d|div=%d|mod=%d\n", a11, b11, d, m);
	a11 = 13;
	b11 = 4;
	printf("a=%d|b=%d|div=%d|mod=%d\n", a11, b11, d, m);
	ft_div_mod(a11, b11, div, mod);
	printf("a=%d|b=%d|div=%d|mod=%d\n", a11, b11, d, m);


	// ##############################
	ft_entete_exo(12); printf("ft_iterative_factorial\n");
	// ##############################                 ex12 ft_iterative_factorial
	printf("!-1=%d|(0)\n", ft_iterative_factorial(-1));
	printf("!0=%d|(1)\n", ft_iterative_factorial(0));
	printf("!1=%d|(1)\n", ft_iterative_factorial(1));
	printf("!2=%d|(2)\n", ft_iterative_factorial(2));
	printf("!5=%d|(120)\n", ft_iterative_factorial(5));
	printf("!12=%d|(479001600)\n", ft_iterative_factorial(12));
	printf("!13=%d|(0)\n", ft_iterative_factorial(13));
*/
/*
	// ##############################
	ft_entete_exo(13); printf("ft_recursive_factorial\n");
	// ##############################                 ex13 ft_recursive_factorial
	printf("!-1= %d|(0)\n", ft_recursive_factorial(-1));
	printf("!0=  %d|(1)\n", ft_recursive_factorial(0));
	printf("!1=  %d|(1)\n", ft_recursive_factorial(1));
	printf("!2=  %d|(2)\n", ft_recursive_factorial(2));
	printf("!5=  %d|(120)\n", ft_recursive_factorial(5));
	printf("!12= %d|(479001600)\n", ft_recursive_factorial(12));
	printf("!13= %d|(0)\n", ft_recursive_factorial(13));
*/
/*
	// ##############################
	ft_entete_exo(14); printf("ft_sqrt\n");
	// ##############################                 ex14 ft_sqrt
	printf("racine  1=%d|(1)\n", ft_sqrt(1));
	printf("racine  4=%d|(2)\n", ft_sqrt(4));
	printf("racine  9=%d|(3)\n", ft_sqrt(9));
	printf("racine 81=%d|(9)\n", ft_sqrt(81));
	printf("racine 100000000=%d|(10000)\n", ft_sqrt(100000000));
	printf("racine 2147395600=%d|(46340)\n", ft_sqrt(2147395600));
	printf("racine -1=%d|(0)\n", ft_sqrt(-1));
	printf("racine  0=%d|(0)\n", ft_sqrt(0));
	printf("racine  2=%d|(0)\n", ft_sqrt(0));
	printf("racine  2147395601=%d|(0)\n", ft_sqrt(0));
	printf("racine  2147483647=%d|(0)\n", ft_sqrt(2147483647));


	// ##############################
	ft_entete_exo(15); printf("ft_putstr\n");
	// ##############################                 ex15 ft_putstr
	char	str151[] = "Pole emploi";
	printf("Pole emploi(attendu)\n");
	ft_putstr(str151);


	// ##############################
	ft_entete_exo(16); printf("ft_strlen\n");
	// ##############################                 ex16 ft_strlen
	char	str161[] = "123456789";
	printf("(attendu=9)|(unix_strlen=%d)|%lu\n", ft_strlen(str161), strlen(str161));
	char	str162[] = "";
	printf("(attendu=0)|(unix_strlen=%d)|%lu\n", ft_strlen(str162), strlen(str162));


	// ##############################
	ft_entete_exo(17); printf("ft_strcmp\n");
	// ##############################                 ex17 ft_strcmp
	char	str171[] = "1111111111";
	char	str172[] = "11111112";
	char	str173[] = "1111111111";
	printf("(attendu=-1)|(unix_strcmp=%d)|%d\n", ft_strcmp(str171, str172), strcmp(str171, str172));
	printf("(attendu= 1)|(unix_strcmp=%d)|%d\n", ft_strcmp(str172, str171), strcmp(str172, str171));
	printf("(attendu= 0)|(unix_strcmp=%d)|%d\n", ft_strcmp(str173, str171), strcmp(str173, str171));


	// ##############################
	ft_entete_exo(20); printf("ft_strdup\n");
	// ##############################                 ex20 ft_strdup
	char	str201[] = "abcdefghijklm";
	char	str202[] = "0123456789";
	char	*str203;

	str203 = ft_strdup(str201);
	printf("%s\n", str203);
	str203 = ft_strdup(str202);
	printf("%s\n", str203);


	// ##############################
	ft_entete_exo(21); printf("ft_range\n");
	// ##############################                 ex21 ft_range
	int		min;
	int		max;
	int		*tab;
	
	min = 30;
	max = 20;

	tab = ft_range(min, max);
	if (min > max)
		printf("min > max!! :%p", tab);
	else
		printf("min=%d|%d=max\n", min, max);

	if (min < max)
	{
		int		k;
		k = 0;
		while (k < max - min)
		{
			printf("%d|", tab[k]);
			k++;
		}
	}
*/

/*
	// ##############################
	ft_entete_exo(22); printf("ft_ft_abs\n");
	// ##############################                 ex22 ft_abs

	int		valeur22;

	valeur22 = -10;
	printf("%d\n", ABS(valeur22));
	valeur22 = 10;
	printf("%d\n", ABS(valeur22));
	valeur22 = -20;
	printf("%d\n", ABS(valeur22));
	valeur22 = -20;
	printf("%d\n", (valeur22 < 0 ? -valeur22 : valeur22));
	printf("%d\n", ((valeur22) < 0 ? (-valeur22) : (valeur22)));
*/

/*
	// ##############################
	ft_entete_exo(25); printf("ft_foreach\n");
	// ##############################                 ex25 ft_foreach
	int		tab251[10] = {9,1,9,3,9,5,6,7,8,9};

	ft_foreach(tab251, 10, &ft_putnbr);
*/

	// ##############################
	ft_entete_exo(26); printf("ft_count\n");
	// ##############################                 ex26 ft_count_if
	char	*tab261[7];
	tab261[0] = "aaaa";
	tab261[1] = "bbbb";
	tab261[2] = "c";
	tab261[3] = "dddd";
	tab261[4] = "e";
	tab261[5] = NULL;
	tab261[6] = NULL;
	int		i261;
	i261 = 0;

	printf("%d| valeur initiale\n", i261);
	i261 = ft_count_if(tab261, &ft_strlen_ex26);
	printf("%d| nbr de chaines avec un seul caractere\n", i261);







//ATTENTION ex 18 ou 19, verifier avec un seul argument
	return (0);
}
