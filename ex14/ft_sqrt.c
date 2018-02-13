/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 09:46:41 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/20 15:51:16 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		racin;

	racin = 1;
	if (nb <= 0 || 2147395600 < nb)
		return (0);
	if (nb == 1)
		return (1);
	while (racin * racin <= nb)
		if (racin * racin == nb)
			return (racin);
		else
			racin++;
	return (0);
}
