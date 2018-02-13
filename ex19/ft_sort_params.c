/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:37:06 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/20 14:47:43 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_arguments(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_sort_arguments(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		swap;

	swap = 1;
	while (swap != 0)
	{
		swap--;
		i = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				swap++;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
		return (0);
	if (argc > 2)
		ft_sort_arguments(argc, argv);
	ft_print_arguments(argc, argv);
	return (0);
}
