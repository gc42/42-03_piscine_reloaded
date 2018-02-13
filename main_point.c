/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 09:23:33 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/15 17:07:31 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ex23/ft_point.h"

#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int		main(void)
{
	t_point		point;

	set_point(&point);
	printf("valeur de x:%d|%d", point.x, point.y);
	return (0);
}
