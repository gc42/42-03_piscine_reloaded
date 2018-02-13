/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 17:27:46 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/07 18:45:27 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		fact;

	fact = 1;
	if (nb < 0 || 13 <= nb)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		fact = fact * nb;
		nb--;
	}
	return (fact);
}
