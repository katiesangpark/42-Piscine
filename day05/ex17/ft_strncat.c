/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:15:28 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/16 22:32:08 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i = i + 1;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j = j + 1;
	}
	dest[i + j] = '\0';
	return (dest);
}