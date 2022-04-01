/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:52:58 by aminoru-          #+#    #+#             */
/*   Updated: 2022/04/01 14:57:54 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUF_SIZE 16384

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}	
}

void	ft_display_file(char *file)
{
	int		fd;
	int		r;
	char	content[BUF_SIZE + 1];

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_putstr("Cannot read file.\n");
	else
	{
		r = read (fd, content, BUF_SIZE);
		while (r)
		{
			content[r] = '\0';
			ft_putstr(content);
			r = read (fd, content, BUF_SIZE);
		}
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_display_file(argv[1]);
}
