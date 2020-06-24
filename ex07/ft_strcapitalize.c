/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkariem <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 15:35:17 by mkariem           #+#    #+#             */
/*   Updated: 2020/06/24 15:48:59 by mkariem          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str);
{
	int i;
	int upper;
	i = 0;
	upper = i;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9')||
				(str[i] >= 'a' && str[i] <= 'z')||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{if(upper && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
			else if(!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] +32;
		   upper = 0;
		}
		else
	upper = 1;
i++;
	}
	return(str);
}
