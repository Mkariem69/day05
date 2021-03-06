/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 14:24:26 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/24 14:27:58 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strupcase(char *str)
{
	int z;
	z = 0;
	while(str[x] != '\0')
	{
		if(str[x] >= 'a' && str[x] <= 'z')
			str[x] -= 32;
		x++;
	}
	return(str);
}
