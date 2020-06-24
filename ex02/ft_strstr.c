/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 13:08:33 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/24 15:33:59 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int x;
	int z;
	x = 0;
	if(to_find[0] == '\0')
		return(str);
	while(str[x] != '\0')
	{
		z = 0;
		while(str[x + z] != '\0' && str[x + z] == to_find[z])
		{
	if(to_find[z + 1] == '\0')
		return(&str[x]);
	++z;
		}
		++x;
	}
	return(0);
}