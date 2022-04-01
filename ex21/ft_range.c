/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminoru- <aminoru-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:34:32 by aminoru-          #+#    #+#             */
/*   Updated: 2022/03/27 20:50:05 by aminoru-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	len;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	len = max - min;
	range = malloc(len * sizeof(int));
	while (i < len)
		range[i++] = min++;
	return (range);
}
