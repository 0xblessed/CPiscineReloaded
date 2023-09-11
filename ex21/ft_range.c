/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 15:03:54 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/06 15:35:13 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*v;
	int	i;
	int	j;

	i = min;
	j = 0;
	if (min >= max)
	{
		return (NULL);
	}
	v = (int *) malloc(sizeof(int) * (max - min));
	if (v == NULL)
	{
		return (NULL);
	}
	while (i < max)
	{
		v[j] = i;
		i++;
		j++;
	}
	return (v);
}
