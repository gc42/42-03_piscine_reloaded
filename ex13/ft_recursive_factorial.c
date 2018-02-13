/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:35:04 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/20 16:19:00 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || 13 <= nb)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (1 < nb && nb <= 12)
		return (nb * ft_recursive_factorial(nb - 1));
	return (0);
}
