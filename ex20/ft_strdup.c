/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:29:25 by aminoru-          #+#    #+#             */
/*   Updated: 2022/03/27 20:38:24 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p_str;
	int		i;

	p_str = malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		p_str[i] = src[i];
		i++;
	}
	return (p_str);
}
