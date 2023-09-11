/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-b <amunoz-b@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:18:03 by amunoz-b          #+#    #+#             */
/*   Updated: 2023/09/11 14:38:51 by amunoz-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_display(int fd)
{
	char	buffer[1024];

	while (read(fd, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else if (argc < 2)
		ft_putstr("File name missing.\n");
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (!fd)
			ft_putstr("Cannot read file. \n");
		ft_display(fd);
		close(fd);
	}
	return (0);
}
