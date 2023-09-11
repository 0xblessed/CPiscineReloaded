/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:45:18 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/06 19:28:47 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = nb;
	if (r < 0 || r > 15)
		return (0);
	else if (r == 0 || r == 1)
		return (1);
	else
	{
		while (r > 1)
		{
			r--;
			nb *= r;
		}
	}
	return (nb);
}
